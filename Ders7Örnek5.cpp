#include<stdio.h>
int main(){

	int a,b,c,d;
	int sayi, sayinin_tersi;
	for( a = 0; a < 10; a++ )
		for( b = 0; b < 10; b++ )
			for( c = 0; c < 10; c++ )
				for( d = 0; d < 10; d++ ) {
					sayi = a * 1000 + b * 100 + c * 10 + d;
					
					sayinin_tersi = d * 1000 + c * 100 + b * 10 + a;

					if( sayi == 4 * sayinin_tersi && sayi != 0 ) { 

						printf( "sayi: %d, tersi: %d\n", sayi, sayinin_tersi );

						return 0;
					}
				}
}
