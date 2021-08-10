#include<stdio.h>
int main( void )
{
	int girilen_yas;
	printf("Lütfen yaþýnýzý giriniz> ");
	scanf("%d",&girilen_yas);
	if( girilen_yas >= 18 && girilen_yas <= 65 ) 
		printf("Girilen yaþ, 18 ile 65 arasýndadýr.\n");
	//Girilen yaþ 18 ile 65 arasýnda deðilse, aþaðýdaki else 
	//bloðu çalýþýr.
	else {
		//Girilen yaþ 18'den küçükse
		if( girilen_yas < 18 )
			printf("Girilen yaþ, 18'den küçüktür.\n");
		//Girilen yaþ 65'ten büyükse
		else
			printf("Girilen yaþ, 65'ten büyüktür.\n");
	}
}
