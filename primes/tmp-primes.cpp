#include <iostream>
using namespace std;

#define N 40

template <int p, int i>
struct IsPrime { // Check if i divides p for some i on the interval [2, p-1]
	static bool const prime = (p % i) && IsPrime<p, i - 1>::prime;
};

template <int p>
struct IsPrime<p, 1> { // Stop checking for divisors once i decrements to 1
	static bool const prime = true;
};

template <int p>
struct Primes { 
	Primes<p - 1> primeInstance;
	static bool const prime = IsPrime<p, p - 1>::prime;
	void loopFunction() {
		primeInstance.loopFunction();
		if (prime) {
			cout << " " << p;
		}
	} 
};

template<>
struct Primes<1> { 
	static bool const prime = 0;
	void loopFunction() {}
};

int main()
{
   Primes<N> primeInstance; 
   cout << "Prime numbers up to " << N << ":";
   primeInstance.loopFunction(); 
}