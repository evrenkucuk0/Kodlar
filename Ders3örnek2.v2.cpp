#include<stdio.h>
int main( void )
{
	int bolunen, bolen;
	float sonuc;
	printf("B�l�necek say�y� giriniz> ");
	scanf("%d",&bolunen);
	printf("B�len say�y� giriniz> ");
	scanf("%d",&bolen);
	if( bolen != 0 ) {
		sonuc = (float)bolunen / bolen;

		printf("Sonuc: %.2f\n",sonuc);
	}
	else
		printf("Hata: Say� 0'a b�l�nemez!\n");

}
