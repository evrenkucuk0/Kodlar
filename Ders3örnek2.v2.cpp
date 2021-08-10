#include<stdio.h>
int main( void )
{
	int bolunen, bolen;
	float sonuc;
	printf("Bölünecek sayýyý giriniz> ");
	scanf("%d",&bolunen);
	printf("Bölen sayýyý giriniz> ");
	scanf("%d",&bolen);
	if( bolen != 0 ) {
		sonuc = (float)bolunen / bolen;

		printf("Sonuc: %.2f\n",sonuc);
	}
	else
		printf("Hata: Sayý 0'a bölünemez!\n");

}
