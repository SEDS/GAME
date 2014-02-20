OCL Expression Evaluator
=============================

This file contains instructions on how to compile against the OCL
expression evaluator, and how to use it to evaluate OCL expressions.

Project Setup
-------------------------

Compile and link against the OCL expression evaluator in your project
by subclassing your project's definition from the **game_ocl** MPC base
project as follows:

```
project (My_Project) : game_ocl {
  // ...
}
```

This will include the required import libraries, and setup the correct
project build dependencies. There is no need to derive from **game_ocl**
if another base project derives from it.

Usage
---------------

The simpliest way to use the OCL expression evaluator is to create an
```GAME::Ocl::Evaluator``` object and invoke its ```evaluate``` method on
a target object and OCL expression.

```cpp
// include the OCL evaluator
#include "game/ocl/Evaluator.h"

// ...
GAME::Mga::Object obj = /* get object from somewhere */;
GAME::Ocl::Evalutor eval;
bool result = eval.evaluate (obj, "self.parts(Foo).size = 3");
```

The example above will compile the OCL expression, and evaluate it. This approach
however, is not optimal because it requires compiling the OCL expression each
time you want to evaluate it against an object.

You therefore can use the ```OCL_Parser``` class to compile an OCL expression,
and use the ```GAME::Ocl::Evaluator``` to evaluate the pre-compiled OCL
expression against the target object. This approach will allow you to cache the
OCL expression for repeated use against many objects.
