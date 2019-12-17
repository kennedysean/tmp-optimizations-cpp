#include <iostream>
using namespace std;

#define N 5

// Determine value at n index of Fibonacci sequence
unsigned int recursiveFib(unsigned int n) {
    return n < 2 ? n : recursiveFib(n-1) + recursiveFib(n-2);
}

int main() {
    cout << recursiveFib(N) << endl;
}