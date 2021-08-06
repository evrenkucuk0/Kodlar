#include<stdio.h>
int main(){
	int girilen_sayi;
	printf("bir sayi giriniz>");
	scanf("%d",&girilen_sayi);
	if(18<girilen_sayi<65);
	printf("girilen sayi 18 ile 65 arasindadir\n"); 
	//bu kod neden çalýþmýyo
	// eðer bu aralýkta deðilse ekrana bi þey yazmadan geçmesi lazým
	// bu iþlemi tek satýrda yapamýyo muyuz 18<girilensayi<65 þeklinde
	// galiba yapabilmek için else kullanmak lazým
}
