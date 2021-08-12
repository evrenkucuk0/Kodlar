#include<stdio.h>
int main()
{
	int girilen_yas;
	printf("Lutfen yasinizi giriniz> ");
	scanf("%d",&girilen_yas);
		if( girilen_yas >= 18 && girilen_yas <= 65 ) 
		printf("Girilen yas, 18 ile 65 arasindadir.\n");
	else{
		printf("Girilen yas, 18 ile 65 arasinda degildir\n");
}
}
