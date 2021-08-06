#include<stdio.h>
int main(){
	int girilen_sayi;
	
	printf("bir sayi giriniz>");
	
	scanf("%d",&girilen_sayi);
	
	if(18<girilen_sayi<65)
	
		printf("girilen sayi 18 ile 65 arasindadir\n");	
		
	else 
	
		printf("girilen sayi 18 ile 65 arasinda degildir\n");
		// else eklenmiþ hali
}
