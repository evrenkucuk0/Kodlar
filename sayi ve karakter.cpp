#include<stdio.h>
int main(){
	int sayi;
	char karakter;
	int i=1;

	
	printf("Bir karakter ve bir sayi giriniz\n");
	scanf("%c",&karakter);
	scanf("%d",&sayi);

	if (sayi>=0){
		printf("girdiginiz karakter %c\n",karakter);
		printf("girdiginiz sayi %d\n",sayi);
	}
	else {
	
	printf("Lutfen pozitif bir deger giriniz.");
	}
	for(i=1;i<=sayi;i++){
	
	
	printf("%c\n",karakter);
	
}
