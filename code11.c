#include <stdio.h>
#include <stdbool.h>
//Girilen sayinin asalligini kontrol eden program.
int main(void) {
    int x, sayac;
    bool flag = false;
    
    printf("Sayiyi giriniz: ");
    scanf("%d", &x);
    
    if (x <= 1) {
        printf("Asal degildir\n");
        return 0;
    }
    
    for (sayac = 2; sayac <= x / 2; sayac++) {
        if (x % sayac == 0) {
            flag = true;
            break;
        }
    }
    
    if (!flag)
        printf("Asaldir\n");
    else
        printf("Asal degildir\n");
    
    return 0;
}

