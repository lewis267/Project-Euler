/*
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10,001st prime number?

*/

// What are primes?
// Primes are numbers not divisable by any other numbers but themselves and 1.

// Multithreading in C?

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <stdbool.h>
#include <math.h>

int seiveOfEratosthenes()
{
	int A[500000] = { 0 }; //seg fault happens over 500000

	for (int i = 2; i < sqrt(100000); i++) {
		if (!A[i]) {
			for (int j = i*i; j < 100000; j += i) {
				A[j] = 1;
			}
		}
	}

	int counter = 0;
	for (int i = 0; i < 100000; i++) {
		if (!A[i]) printf("(%d): %d, ", ++counter, i);
	}
}

int main(int argc, char **argv)
{
	seiveOfEratosthenes();
	exit(0);
}
