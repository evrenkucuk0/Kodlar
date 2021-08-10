
// % işaretini sor 14. satır
// SAYI/=10, sayi*=10 gibi ifadelerin mantığını sor
#include<stdio.h>
int main (){
	int sayi;
	int yazilacak_rakam;

	printf("sayiyi giriniz> ");
	scanf("%d",&sayi);
	
		printf("sayinin tersi: ");
	while( sayi>10 ) {

		yazilacak_rakam = sayi % 10;
		printf("%d",yazilacak_rakam);
		sayi /= 10;
	}
	printf("%d\n",sayi);
}
