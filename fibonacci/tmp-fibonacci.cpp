#include <iostream>
using namespace std;

#define N 5

template <unsigned int n>
struct fibonacci {
	static unsigned long long const value = fibonacci<n-1>::value + fibonacci<n - 2>::value ;
};

template <>
struct fibonacci<1> {
	static unsigned long long const value = 1 ;
};

template <>
struct fibonacci<0> {
	static unsigned long long const value = 0 ;
};

int main () {
    cout << fibonacci<N>::value << endl;
}