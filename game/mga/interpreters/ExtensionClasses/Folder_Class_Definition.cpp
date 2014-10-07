// $Id$

#include "StdAfx.h"
#include "Folder_Class_Definition.h"

#if !defined (__GAME_INLINE__)
#include "Folder_Class_Definition.inl"
#endif  // !defined __GAME_INLINE__

#include "Functors.h"
#include "Object_Manager.h"
#include "Proxy_Visitor.h"

#include "game/mga/Atom.h"
#include "game/mga/Connection.h"
#include "game/mga/MetaAtom.h"
#include "game/mga/Reference.h"
#include "game/mga/Visitor.h"

/**
 * @class Containment_Visitor
 */
class Folder_Containment_Visitor : public Proxy_Visitor
{
public:
  //
  // Containment_Visitor
  //
  Folder_Containment_Visitor (Folder_Class_Definition * parent)
    : parent_ (parent)
  {

  }

  //
  // visit_Atom
  //
  void visit_Atom (GAME::Mga::Atom_in src)
  {
    if (this->is_false_self_containment (src))
      return;

    // Determine what containment collection the item belongs to. This
    // will detemrine what methods containment methods we need to generate
    // for the model element.
    Object_Class_Definition * definition = OBJECT_MANAGER->get (src);

    this->parent_->insert_child (definition);
    definition->insert_parent (this->parent_);
  }

  //
  // visit_Connection
  //
  void visit_Connection (GAME::Mga::Connection_in item)
  {
    this->dst_ = item->dst ();
    item->src ()->accept (this);
  }

private:
  bool is_false_self_containment (GAME::Mga::Atom_in src)
  {
    return
      src->is_equal_to (this->parent_->get_object ()) &&
      !this->dst_->is_equal_to (this->parent_->get_object ());
  }

  Folder_Class_Definition * parent_;
  std::string cardinality_;
  GAME::Mga::FCO dst_;
};
//
// build
//
void Folder_Class_Definition::build (GAME::Mga::FCO_in fco)
{
  // Pass control to the base class.
  Object_Class_Definition::build (fco);

  // Gather all the contained elements.
  std::vector <GAME::Mga::Connection> containments;
  fco->in_connections ("FolderContainment", containments);

  Folder_Containment_Visitor cv (this);
  for (GAME::Mga::Connection containment : containments)
    containment->accept (&cv);
}

//
// generate_definition
//
void Folder_Class_Definition::
generate_definition (const Generation_Context & ctx)
{
  // Write the folders for this model element.
  ctx.hfile_
    << std::endl
    << "/**" << std::endl
    << " * @name Folder Getters" << std::endl
    << " */" << std::endl
    << "///@{" << std::endl;

  for (Object_Class_Definition * def : this->children_)
    this->generate_folder_containment (ctx, def);

  ctx.hfile_
    << "///@}"
    << std::endl;
}

//
// generate_folder_containment
//
void Folder_Class_Definition::
generate_folder_containment (const Generation_Context & ctx, Object_Class_Definition * item)
{
  const std::string name = item->name ();
  const std::string method_name = "get_" + name + "s";
  const std::string accessor = item->metaname () == "Folder" ? "folders" : "children";

  // Declare the functions.
  ctx.hfile_
    << std::endl
    << "size_t " << method_name << " (std::vector <" << name << "> & items) const;" << std::endl
    << "::GAME::Mga::Collection_T <" << name << "> " << method_name << " (void) const;";

  // Implement the functions.
  ctx.sfile_
    << function_header_t (method_name)
    << "size_t " << this->classname_ << "::"
    << method_name << " (std::vector <" << name << "> & items) const"
    << "{"
    << "return this->" << accessor << " (items);"
    << "}"
    << function_header_t (method_name)
    << "::GAME::Mga::Collection_T <" << name << "> " << this->classname_ << "::"
    << method_name << " (void) const"
    << "{"
    << "return this->" << accessor << " <" << name << "> ();"
    << "}";
}
