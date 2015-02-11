/*
Largest prime factor
Problem 3
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/

#include <stdbool.h>

bool is_prime(num) {
	long long i;
	for ( i = 2; i <= num/2; i++ ) {
		if ( num % i == 0 ) return false;
	}
	return true;
}

main () {
	long long i, num = 600851475143LL, max;
	printf("%d\n", num);
	return;
	for ( i = (long long)floor(num/2); i >= 2; i-- ) {
		printf("%d\n", i);
	}
	printf("%d\n", max);
}
