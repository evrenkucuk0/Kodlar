#include<stdio.h>
int main( void )
{
	int girilen_yas;
	printf("L�tfen ya��n�z� giriniz> ");
	scanf("%d",&girilen_yas);
	if( girilen_yas >= 18 && girilen_yas <= 65 ) 
		printf("Girilen ya�, 18 ile 65 aras�ndad�r.\n");
	//Girilen ya� 18 ile 65 aras�nda de�ilse, a�a��daki else 
	//blo�u �al���r.
	else {
		//Girilen ya� 18'den k���kse
		if( girilen_yas < 18 )
			printf("Girilen ya�, 18'den k���kt�r.\n");
		//Girilen ya� 65'ten b�y�kse
		else
			printf("Girilen ya�, 65'ten b�y�kt�r.\n");
	}
}
