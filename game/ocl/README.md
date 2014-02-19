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

Inclusion
---------------
