#include <stdio.h>
//Girilen sayiya kadar olan dogal sayilari ve o sayilarin toplamini while döngüsü ile yazdiran kod.
int main(){
int num=0, n,sum=0;
printf("Islem yapmak istediginiz tam sayi degerini giriniz:");
scanf("%d",&n);
printf("%d sayisina kadar olan dogal sayilar: ",n);
while(num < n)
{
printf("%d ",num);
sum+=num;
num++;
}
printf("\nGirilen sayiya kadar olan dogal sayilarin toplami: %d",sum);
return 0;
}
