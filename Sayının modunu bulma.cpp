#include<stdio.h>
int main(){
	int  sayi,mod,sonuc;
	
	printf("Lutfen bir sayi giriniz");
	scanf("%d",&sayi);	
	printf("Mod degerini giriniz");
	scanf("%d",&mod);
	sonuc= sayi%mod;
	printf("%d%(%d)= %d",sayi, mod, sonuc);
 
    return 0 ;    
}
	

