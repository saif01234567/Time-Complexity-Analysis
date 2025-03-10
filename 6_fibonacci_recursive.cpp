// SAP ID: 57114
// Name: Saif Majid Khan
// Problem 6: Fibonacci (Recursive)

#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
