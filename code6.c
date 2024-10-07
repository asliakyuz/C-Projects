#include <stdio.h>
int main(void){
	int yil;
	printf("Islem yapmak istediginiz yili giriniz:");
	scanf("%d",&yil);
 if (yil%4==0) {
        if (yil%100==0) {
            if (yil%400==0) {
                printf("%d artik yildir.\n", yil);
            } else {
                printf("%d artik yil degildir.\n", yil); 
            }
        } else {
            printf("%d artik yildir.\n", yil); 
        }
    } else {
        printf("%d artik yil degildir.\n", yil); 
    }
	return (0);
}
