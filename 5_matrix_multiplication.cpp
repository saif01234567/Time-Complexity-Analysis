// SAP ID: 57114
// Name: Saif Majid Khan
// Problem 5: Matrix Multiplication

#include <iostream>
using namespace std;

const int N = 100;

void matrixMultiplication(int A[][N], int B[][N], int C[][N], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = 0;
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}
