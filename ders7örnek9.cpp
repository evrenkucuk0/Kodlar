#include<stdio.h>
int main( void ) {
	int a;
	int b; 
	int hipotenus;

	for(a = 1; a < 500; a++)
	for(b = a; b < 500; b++)
	for(hipotenus = b+1; hipotenus <= 500; hipotenus++)
		if( (a*a + b*b) == hipotenus*hipotenus )
					printf("%5d%5d%5d\n", a, b, hipotenus);

}	
// b=a diyip h=b+1 e e�itlemenin amac� h'nin hem b'den hem de a'dan b�y�k olmas� gerekti�i i�in mi
//
