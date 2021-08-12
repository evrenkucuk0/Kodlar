#include<stdio.h>
#include<conio.h>
int main(){
	int sayi;
	printf(" Asal olup olmadigini ogrenmek istediginiz sayiyi giriniz\n");
	scanf("%d",&sayi);
	bool isAsal =true ;
	for(int i=2;i<sayi;i++)
	{
		if(sayi%i ==0){
			printf("%d Sayisi asal degildir \n",sayi);
			isAsal= false;
			break;
		}
	}
	if(isAsal){
		printf("%d Sayisi asal sayidir \n",sayi);
	}
	getch ();
	return 0;
}
