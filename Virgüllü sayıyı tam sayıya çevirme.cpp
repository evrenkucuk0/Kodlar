#include<stdio.h>
int main(){
	float girilen_sayi;
	printf("Lutfen bir sayi giriniz>");
	scanf("%f",&girilen_sayi);
	printf("sayinin yuvarlanmis hali:%d\n",(int)(girilen_sayi+0.5));
	// Burada 0.5'in g�revi nedir(amac� +0.5 i yukar�ya yuvarlamak ama olmuyo)
	// kodu a�t���mda 4,5'i bazen 4 bazen 5 olarak kabul ediyo
}
