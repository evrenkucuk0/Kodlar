//Kodun algoritmasý da dahil iþleyiþini de anlamadým
//Hiç n tanýmlamadan kodda n kullandýk
#include<stdio.h>
int main(){
	int Not;
	printf("Lutfen notu giriniz>");
	scanf("%d",&Not);
	switch(Not/10){
			case 10:
			case 9:printf("Not:A/n");break;
			case 8:printf("Not:B/n");break;
			case 7:printf("Not:C/n");break;
			case 6:printf("Not:D/n");break;
			case 5: 
			case 4:
			case 3:
			case 2:
			case 1:
			case 0: printf("Not:F/n");break;
			default:
	printf("HATA:Bilinmeyen bir deger girdiniz");
			
	}
	
}
