// rand.c
//
//


#include "rand.h"


static unsigned long next = 1;

/* RAND_MAX assumed to be 32767 */

/* RAND_MAX will be 2^31 or 2147483647 (2^31 - 1 to accomodate for 0 being the starting slot)*/

int rand(void){
	next = next * 1103515245 + 12345;
	return((unsigned)(next/65536) % RAND_MAX);
}


void srand(unsigned int seed){
	next = seed;
}







