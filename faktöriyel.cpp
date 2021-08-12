#include<stdio.h>
int main(){
	int i,sayi;
	unsigned long long faktoriyel = 1;

	printf("sayi giriniz> ");
	scanf("%d",&sayi);
	if( sayi >= 0 ) {
		for( i = sayi; i > 0; i-- ) {
			faktoriyel *= i;
		}
		printf("faktoriyel = %llu\n",faktoriyel);
	}
	else{
	
		printf("hata: sayi 0'dan küçük olamaz!\n");
}
	return faktoriyel;
}

