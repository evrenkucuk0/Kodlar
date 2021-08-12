#include<stdio.h>
int main(){
    
    int sayi,i;
    int buyuk;
           
    for(i=1; i<=4; i++){
        
        printf("Sayi Giriniz ", i+1);  
        scanf("%d", &sayi);
        
        if(i==0){               
            buyuk = sayi;        
        }
	 else{   
	      
		if(buyuk<sayi){
            buyuk=sayi;
            }
        }        
    }
    printf("En buyuk sayi= %d", buyuk);

    return 0;
}
