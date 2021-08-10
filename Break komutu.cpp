//Rand için 2. kütüphane eklendi
// rastgele sayi seciyoruz sürekli 15 çıkması normal mi
#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,tesadufi_sayi;
	int deneme_sayisi=0;
	while (1){
		tesadufi_sayi= rand () % 100;
		deneme_sayisi++;
		if(tesadufi_sayi==61)break;
	}
printf("Toplam deneme sayisi: %d\n",deneme_sayisi);
	
}

