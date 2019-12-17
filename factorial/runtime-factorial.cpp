#include <iostream>
using namespace std;

#define N 18 // N defined at compile time

unsigned long long recursiveFactorial(unsigned int n) {
    return n == 0 ? 1 : n * recursiveFactorial(n-1); 
}

int main() {
    unsigned int n = N;
    unsigned long long answer;
    int i=0;
    int numLoops = 1000000;
    while (i < numLoops) {
        answer = recursiveFactorial(n);
        i++;
    }
    cout << answer << endl;
}