// SAP ID: 57114
// Name: Saif Majid Khan
// Problem 7: Fibonacci (Iterative)

#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) return n;
    int a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}
