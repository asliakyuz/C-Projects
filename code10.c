#include<stdio.h> 
//Girilen dizi elemanlari icin toplama carpma yapan program.
int main(){
	int sayi[10],toplam,carpim,i;
	printf(" dizinin elemanlarini giriniz:\n");
	for(i=0;i<10;i++){
		printf("%d. elemani giriniz:",i+1);
		scanf("%d",&sayi[i]);
	}
	toplam=0;
	carpim=1;
	for(i=0;i<10;i++){
		toplam+=sayi[i];
		carpim*=sayi[i];
	}
	printf("toplam=%d\ncarpim=%d",toplam,carpim);
	return 0;
}
