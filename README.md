# C++ Template Metaprogramming Optimizations
Empirical tests of runtime recursion vs. compile-time computation using C++ template metaprogramming

## Introduction
Template metaprogramming (TMP) is the coding practice of using C++ templates to perform computations at compile-time. This practice was developed somewhat by accident when it was discovered that the template system in C++ is Turing-complete. This allows programmers to take any pre-defined computation that is solved at runtime and refactor it using TMP to perform the computation and store an answer at compile-time. While unconventional and often cumbersome to program in this way, template metaprogramming has practical use cases and can introduce some helpful optimizations into C++ programs. This repository explores how TMP can affect the computational efficiency of algorithms implemented in C++ programs. 

## Calculating Fibonacci Numbers
### Problem
Write a program to output the '*n*'th number in the Fibonacci Sequence using a recursive implementation. Assume that the value of *n* is known at compile-time. 
### Methods
The problem is solved using two programs, one program involving a function that recursively computes Fibonacci numbers at runtime and one program that uses template metaprogramming to recursively compute Fibonacci numbers at compile-time. The computational efficiency of these two programs can then be compared for different values of *n*.

I used the following commands with gcc version 8.1.0 (built by MinGW-W64 project) on Windows 10 with no optimization flags to compile the C++ source code. Adjustments may need to be made depending on the machine on which the programs are being compiled and run. 
```
time g++ -o tmp-fib.exe -Wall tmp-fibonacci.cpp
time ./tmp-fib.exe
time g++ -o runtime-fib.exe -Wall runtime-fibonacci.cpp
time ./runtime-fib.exe
```
Be sure to navigate to the [fibonacci](./fibonacci) directory before running these commands.

## Computing Factorials
### Problem
Write a program that recursively calculates N factorial (can also be written as N! = N * (N-1) * (N-2) * … * 2 * 1) given N defined at compile-time. 
### Methods
The problem is solved using two programs, one program involving a function that recursively computes N! at runtime and one program that uses template metaprogramming to recursively compute factorials at compile-time. A loop is used in each program to exacerbate any significant differences in speed between runtime and compile-time computation. The computational efficiency of these two programs can then be compared for different values of N.

I used the following commands with gcc version 8.1.0 (built by MinGW-W64 project) on Windows 10 with no optimization flags to compile the C++ source code. Adjustments may need to be made depending on the machine on which the programs are being compiled and run.
```
time g++ -o tmp-fact.exe -Wall tmp-factorial.cpp
time ./tmp-fact.exe
time g++ -o runtime-fact.exe -Wall runtime-factorial.cpp
time ./runtime-fact.exe
```
Be sure to navigate to the [factorial](./factorial) directory before running these commands.
		
## Finding Prime Numbers
### Problem
Write a program that recursively finds all prime numbers less than or equal to some value N defined at compile-time. To decide if a number p is prime, the program must test every possible divisor on the interval \[2, p-1]. All values of p on the interval \[2,  N] must be tested for each N to determine all prime numbers less than or equal to N. 
### Methods
The problem is solved using two programs, one program involving a function that recursively finds the prime numbers at runtime and one program that uses template metaprogramming to recursively find prime numbers at compile-time. The computational efficiency of these two programs can then be compared for different values of N.

I used the following commands with gcc version 8.1.0 (built by MinGW-W64 project) on Windows 10 with no optimization flags to compile the C++ source code. Adjustments may need to be made depending on the machine on which the programs are being compiled and run.
```
time g++ -o tmp-prime.exe -Wall tmp-prime.cpp
time ./tmp-prime.exe
time g++ -o runtime-prime.exe -Wall runtime-prime.cpp
time ./runtime-prime.exe
```
Be sure to navigate to the [primes](./primes) directory before running these commands.

## Conclusions
The examples explored in this repository show how template metaprogramming can be used in C++ programs to perform computations at compile-time that may or may not prove to be more efficient than their runtime counterparts. While TMP can improve the overall efficiency of an algorithm implemented in C++, TMP is not an ideal solution to every problem in every situation, especially when programmers (myself included) do not have a complete understanding of how to write clean and efficient code using the template system such that the compiler is able to handle the computations more efficiently than they would otherwise be handled at runtime. 

**Nothing in this repository is meant to serve as direct or indirect proof that template metaprogramming is the most efficient way to solve the aforementioned problems. This repository is best used as an educational resource for those looking to better understand what template metaprogramming is and how it can be useful to C++ programmers.**

## Additional Resources
* https://www.geeksforgeeks.org/template-metaprogramming-in-c/
* https://www.fluentcpp.com/2017/06/02/write-template-metaprogramming-expressively/
* https://en.wikibooks.org/wiki/C%2B%2B_Programming/Templates/Template_Meta-Programming
* https://en.wikipedia.org/wiki/Template_metaprogramming


