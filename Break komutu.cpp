#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int i,tesadufi_sayi;
	int deneme_sayisi=0;
	srand(time(NULL));
	while (1){
		tesadufi_sayi= rand() % 100;
		deneme_sayisi++;
		if(tesadufi_sayi==61)break;
	}
printf("Toplam deneme sayisi: %d\n",deneme_sayisi);
	
}

