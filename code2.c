#include <stdio.h>
#include <stdbool.h>
//Girilen sayiya kadar olan asal sayilari ekrana yazdiran kod.
int main(){
int num, i, j ;
bool flag = false, asalKontrol= false;
printf("Islem yapmak istediginiz sayiyi giriniz: ");
scanf("%d",&num);

 if (num < 2) {
        printf("2'den kucuk asal sayi yoktur.\n");
        return 0;
    }
    
printf("%d sayisina kadar bulunan asal sayilar: ",num);

for(i=2 ; i<=num ; i++){
flag = false;
for(j=2 ; j<=i/2 ; j++){
if(i%j == 0){
flag = true;
break;
}
}
  if (!flag) {
            printf("%d ", i);
            asalKontrol = true;
        }
    }
    
    if (!asalKontrol) {
        printf("Asal sayý bulunamadý.\n");
    }

return 0;
}
