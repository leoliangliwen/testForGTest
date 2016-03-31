// A sample program demonstrating using Google C++ testing framework.
//
// Author: wan@google.com (Zhanyong Wan)

#include "sample.h"

// Returns n! (the factorial of n).  For negative n, n! is defined to be 1.
int Factorial(int n) {

    if (n == 0)
    {
        throw 0;
    }
    int result = 1;
    for (int i = 1; i <= n; i++) {
      result *= i;
    }

    return result;
}

