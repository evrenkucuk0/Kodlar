
#include<stdio.h>
int main() {
	int a = 0;
	int b = 1; 
	int c;     
	int n;
	int i;
	
	printf("fibonacci serisi kacinci elemana kadar yazilsin> ");
	scanf("%d", &n);
	
	for( i = 1; i <= n ; i++ ) {
		printf( "%4d. Eleman: %d\n", i, a );
		c = a + b;
		a = b;
		b = c;
	}
	
}
