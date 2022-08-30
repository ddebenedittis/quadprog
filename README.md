# quadprog: Quadratic Programming Solver

Forked from [`quadprog`](https://github.com/quadprog/quadprog) to create a ROS2 package.

## Usage
```c++
#include "quadprog/quadprog.hpp"

int result = solve_quadprog(
   G,
   g0,
   CI,
   ci0,
   x
);
```

```
Solve a strictly convex quadratic program

Minimize     1/2 x^T G x + g0^T x
Subject to   CI x + ci0 >= 0

This routine uses the the Goldfarb/Idnani dual algorithm [1].

References
---------
... [1] D. Goldfarb and A. Idnani (1983). A numerically stable dual
    method for solving strictly convex quadratic programs.
    Mathematical Programming, 27, 1-33.
```