#include<stdio.h>
int main(){
	int bolunen,bolen;
	float sonuc;
	printf("2 tam sayi giriniz");
	scanf("%d%d%f"&bolunen,&bolen,&sonuc);
	if (bolen!=0){
		//burdan sonras� bakarak yapabildim
		sonuc=(float)bolunen/bolen;
		printf("sonuc:%.2f\n",sonuc);
	}
	else
	 printf("hata: say� 0'a bolunemez\n");
	
	
	//�al��m�yo hata ne
}
