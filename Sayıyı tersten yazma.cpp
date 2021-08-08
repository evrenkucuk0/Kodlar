//Algoritmayı oluşturamadım 
// % işaretini sor 14. satır
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
