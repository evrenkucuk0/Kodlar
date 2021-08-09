#include<stdio.h>
int main(){
	float girilen_sayi;
	printf("Lutfen bir sayi giriniz>");
	scanf("%f",&girilen_sayi);
	printf("sayinin yuvarlanmis hali:%d\n",(int)(girilen_sayi+0.5));

}
