// SAP ID: 57114
// Name: Saif Majid Khan
// Problem 10: Recursive Power Function

#include <iostream>
using namespace std;

int power(int x, int n) {
    if (n == 0) return 1;
    return x * power(x, n - 1);
}
