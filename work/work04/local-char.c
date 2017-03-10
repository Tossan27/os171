#include <stdio.h>

void main(void) {
	char vchar0 = 'a';
	char vchar1 = 'b';
	char vchar2 = 'c';
	char vchar3 = 'd';
	
	printf("================================\n");
	printf("vchar0: value = %2c, address = %p\n", vchar0, &vchar0);
	printf("vchar1: value = %2c, address = %p\n", vchar1, &vchar1);
	printf("vchar2: value = %2c, address = %p\n", vchar2, &vchar2);
	printf("vchar3: value = %2c, address = %p\n", vchar3, &vchar3);
	printf("================================\n");
}
