#include<stdio.h>
int main(){
	int girilen_sayi;
	printf("bir sayi giriniz>");
	scanf("%d",&girilen_sayi);
	if(18<girilen_sayi<65);
	printf("girilen sayi 18 ile 65 arasindadir\n"); 
	//bu kod neden �al��m�yo
	// e�er bu aral�kta de�ilse ekrana bi �ey yazmadan ge�mesi laz�m
	// bu i�lemi tek sat�rda yapam�yo muyuz 18<girilensayi<65 �eklinde
	// galiba yapabilmek i�in else kullanmak laz�m
}
