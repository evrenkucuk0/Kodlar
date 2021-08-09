//4. dersin 2. sorusu yapılmadı

//algoritmayı oluşturmak sıkıntı oluyo

#include<stdio.h>
int main(){
	int sayi_1,sayi_2,sayi_3;
	printf("uc sayi giriniz");
	scanf("%d%d%d",&sayi_1,&sayi_2,&sayi_3);
	if(sayi_1>=sayi_2&&sayi_1>=sayi_3)
		printf("%d en buyuk sayidir\n",sayi_1);
	else 
	if(sayi_2>=sayi_1&&sayi_2>=sayi_3)
		printf("%d en buyuk sayidir\n",sayi_2);
	else
	if(sayi_3>=sayi_1&&sayi_3>=sayi_2)
		printf("%d en buyuk sayidir\n",sayi_3);
		
}
