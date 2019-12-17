#include <iostream>
using namespace std;

#define N 40

bool isPrime(int p, int i) {
    return i != 1 ? (p % i) && isPrime(p, i-1) : 1;
}

void printPrimes(int p) {
    if (p == 1) {
        return;
    }
    printPrimes(p-1);
    if (isPrime(p, p-1)) {
        cout << " " << p;
    }
}

int main() {
    cout << "Prime numbers up to " << N << ":";
    printPrimes(N);
}