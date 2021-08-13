#include<stdio.h>
int main(){
	int sayi;
	char karakter;
	printf("Bir sayi ve bir karakter giriniz");
	scanf("%d%c",&sayi,&karakter);
	if (sayi>=0){
		printf("girdigin sayi> %d\n",sayi);
	}
	else {
	
	printf("Lutfen pozitif bir deger giriniz.");
	}
		
	printf("\n");
	return 0;
	
}
