// -*- C++ -*-

//=============================================================================
/**
 * @file      ACircle.h
 *
 * $Id:$
 *
 * @author    Harold Owens II
 */
//=============================================================================
#include <map>
#include <boost/graph/adjacency_list.hpp>
#include <boost/graph/graph_traits.hpp>
#include <boost/graph/properties.hpp>
#include <boost/shared_ptr.hpp>

#include "ACircle_Traits.h"

#ifndef _A_CIRCLE_H_
#define _A_CIRCLE_H_

/**
 * @class ACircle
 *
 * ACircle class that provides the main interface to the A-Circle
 * dependency resolver implementation.
 */
template <typename T>
class ACircle
{
public:

  /// Trait used by ACircle class to determine information about backend
  typedef typename ACircle_Traits <T> TRAIT;

public:
 /**
 * @class Base_Object
 *
 * @brief Struct used by boost to add properties to vertices
 */
  struct Base_Object
  {
    typedef boost::vertex_property_tag kind;
  };
  
  /// Type definitions
  typedef typename ACircle_Traits <T>::base_type BASE_TYPE;
  typedef typename ACircle_Traits <T>::root_type ROOT_TYPE;
  typedef typename ACircle_Traits <T>::visitor_type VISITOR_TYPE;
  typedef typename ACircle_Traits <T>::base_meta BASE_META;

  typedef typename boost::property<Base_Object,BASE_TYPE> VERTEX_PROPERTY;
  typedef typename boost::adjacency_list<boost::vecS, boost::vecS, boost::directedS, VERTEX_PROPERTY> GRAPH;
  typedef typename boost::graph_traits<GRAPH>::vertex_descriptor VERTEX;
  typedef typename boost::graph_traits<GRAPH>::edge_descriptor EDGE;
  typedef typename boost::graph_traits<GRAPH>::vertex_iterator VERTEX_ITER;
  typedef typename boost::graph_traits<GRAPH>::edge_iterator EDGE_ITER;
  typedef typename boost::property_map<GRAPH, Base_Object>::type OBJECT_ACCESSOR;
  typedef typename std::vector<VERTEX> CONTAINER;
  typedef typename std::vector<EDGE> EDGE_CONTAINER;
  typedef typename std::vector<VERTEX>::const_reverse_iterator VECTOR_IT;
  typedef typename std::vector<EDGE>::iterator EDGE_IT;
  typedef typename std::map<T, bool> MAP;
  typedef typename boost::shared_ptr<GRAPH> GRAPH_PTR;
  typedef typename std::list<std::pair<T, GRAPH_PTR> > LIST;
  typedef typename std::list<std::pair<VERTEX, GRAPH_PTR> > VERTEX_GRAPH;
  typedef typename std::list<std::pair<VERTEX, GRAPH_PTR> >::iterator VERTEX_GRAPH_IT;

public:
  /// Default constructor
  ACircle (void);

  /// Destructor.
  ~ACircle (void);

  /**
   * Build a graph from the root and its children.
   *
   * @param      r      Root type of the tree
   * @param      v      Visitor used to visit the nodes of the tree
   */
  void build_graph (const T & r, VISITOR_TYPE & v);

  /**
   * Topologically sorts the graph
   *
   * @param     c      Container to hold sorted vertices
   */
  void topological_sort (CONTAINER & c);

  /**
  * Gets the graph created by A-Circle
  *
  * @returns      GRAPH      a directed graph that is a topology of the
  * object dependencies
  */
  const GRAPH & graph (void);

  /**
  * Clears the state of A-Circle
  *
  * @param      c      A bool that determines if the objects detected
  *                    in a cycle should be cleared
  */
  void clear (bool c = false);

  /**
  * Find cycles in the current graph
  *
  * @return      bool      True if one or more cyles were detected, otherwise
  *                        False
  */
  bool find_cycles (void);

  /**
  * Determines if parameter 'o' was not in a cycle
  *
  * @param      o         a T object included in graph
  * @return               True if object o was not in a cycle, otherwise
  *                       False
  */
  bool no_cycle_detected (const T & o);

  /**
  * Add object 'o' to the current graph. If object 'o' can have children,
  * it should be added using this method
  *
  * @param      o         a T object to add to graph
  */
  void add_node (const T & o);

  /**
  * Add object 'o' to the current graph and add an edge between
  * direct parent and referenced parent
  *
  * @param[in]      'o'         a T object to add to graph
  */
  template <typename S, typename P>
  void add_edge (const T & o);

  /**
  * Add the src and dest managed by object 'o' to the graph and
  * add an edge between the src and dest
  *
  * @param      o         a T object that manages a src and
  * dest
  */
  template <typename CF, typename M, typename MC>
  void add_edge_mng (const T & o);
  
  /**
  * Add insert 'o' into the graph and process for cycles if
  * required.
  *
  * @param      o         a T object to add to the graph
  * @param      f         if true process 'o' and find cycles
  *                       in graph generated by 'o' children
  */
  void insert (const T & o, bool f = false);
  
private:

  /// visit all children of o using the specific visitor v
  void visit_all (const T & o, VISITOR_TYPE & v);
  
  /// topological sort graph and return in c
  void topological_sort_i (CONTAINER & c);

  /// add vertex to graph g
  void add_vertex (const T & o, GRAPH_PTR g);

  /// add vertices to graph g
  void add_vertices (const T & p1, const T & p2, GRAPH_PTR g);

  /// insert_target into map for lookup
  void insert_target (VERTEX & v, GRAPH_PTR g);

  /// remove edge from graph g
  void remove_edge (GRAPH_PTR g);

  /// find cycles in graph
  void cycle_i (void);

  /// insert into container
  void insert (CONTAINER & c);

  /// find_vertex in graph g
  VERTEX find_vertex (const T & o, GRAPH_PTR g, bool & f);

  /// find parent of object o
  template <typename U>
  T find_parent (const T & o);

  /// determine if object o and object p have same parent
  template <typename U>
  bool same_parent_before_file (const T & o, const T & p);

  /// determine if object o and object p are in the same file scope
  template <typename U>
  bool parent_in_same_file (const T & o, const T & p);

  // find second parent of object o
  template <typename U>
  T parent_before_file (const T & o);

private:

  /// contains current graph that is being processed
  GRAPH_PTR                   current_graph_;

  /// contains the elements that were in the circle
  VERTEX_GRAPH                cycle_;

  /// contains the back edges in the graph
  EDGE_CONTAINER              edge_;

  /// holds the objects unique ids used for look up
  MAP                         map_;

  /// holds the objects unique ids which are targets of back_edge
  MAP                         target_;

  /// holds the root nodes with its associated graph of objects
  LIST                        list_;
};

#include "ACircle.inl"

#endif   /* _A_CIRCLE_H_ */



