/*
 * Name : Rakan Tosa Putra
 * NPM : 1506757913
 * Class : B
 * Comment : This is getting interesting...
 */

#define LOOP 5

#include <stdio.h>

void main() {
	int input = 5;
	int hasil = 0;
	int ii;
	for(ii = 0; ii < LOOP; ii++) {
		hasil += input;
	}
	printf("%d times %d equals %d\n", input, LOOP, hasil);
}
