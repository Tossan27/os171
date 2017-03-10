#include <stdio.h>

char vchar0 = 'a';
char vchar1 = 'b';
char vchar2 = 'c';
char vchar3 = 'd';

char* pchar0 = &vchar0;
char* pchar1 = &vchar1;
char* pchar2 = &vchar2;
char* pchar3 = &vchar3;

char** ppchar0 = &pchar0;
char** ppchar1 = &pchar1;
char** ppchar2 = &pchar2;
char** ppchar3 = &pchar3;

char*** pppchar0 = &ppchar0;

void main(void) {
	printf("vchar0: val = %c, adr = %p\n", vchar0, &vchar0);
	printf("vchar1: val = %c, adr = %p\n", vchar1, &vchar1);
	printf("vchar2: val = %c, adr = %p\n", vchar2, &vchar2);
	printf("vchar3: val = %c, adr = %p\n", vchar3, &vchar3);
	printf("pchar0: pts = %c, val = %p, adr = %p\n", *pchar0, pchar0, &pchar0);
	printf("pchar1: pts = %c, val = %p, adr = %p\n", *pchar1, pchar1, &pchar1);
	printf("pchar2: pts = %c, val = %p, adr = %p\n", *pchar2, pchar2, &pchar2);
	printf("pchar3: pts = %c, val = %p, adr = %p\n", *pchar3, pchar3, &pchar3);
	printf("ppchar0: ppt = %c, pts = %p, val = %p, adr = %p\n", **ppchar0, *ppchar0, ppchar0, &ppchar0);
	printf("ppchar1: ppt = %c, pts = %p, val = %p, adr = %p\n", **ppchar1, *ppchar1, ppchar1, &ppchar1);
	printf("ppchar2: ppt = %c, pts = %p, val = %p, adr = %p\n", **ppchar2, *ppchar2, ppchar2, &ppchar2);
	printf("ppchar3: ppt = %c, pts = %p, val = %p, adr = %p\n", **ppchar3, *ppchar3, ppchar3, &ppchar3);
	printf("pppchar0: pppt = %c, ppt = %c, pts = %p, val = %p, adr = %p\n", ***pppchar0, **pppchar0, *pppchar0, pppchar0, &pppchar0);
}
