// SAP ID: 57114
// Name: Saif Majid Khan
// Problem 8: Factorial (Recursive)

#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}
