#include <stdio.h>
/**
 * The Start
 **/
int main(void)
{
	char a;
	float f;
	long L;
	long long LL;
	int I;
	printf("A character has %zu",sizeof(a));
	printf("A float  has %zu",sizeof(f));
	printf("A long has %zu",sizeof(L));
	printf("A long long has %zu",sizeof(LL));
	printf("A int  has %zu",sizeof(I));
	return (0);
}
