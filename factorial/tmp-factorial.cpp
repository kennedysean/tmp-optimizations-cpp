#include <iostream>
using namespace std;

#define N 18 // N defined at compile time

template <unsigned int n>
struct factorial {
	static unsigned long long const value = n * factorial<n-1>::value;
};

template <>
struct factorial<0> {
	static unsigned long long const value = 1;
};

int main() {
	const unsigned int n = N;
    unsigned long long answer;
    int i=0;
    int numLoops = 1000000;
    while (i < numLoops) {
        answer = factorial<n>::value;
        i++;
    }
    cout << answer << endl;
}