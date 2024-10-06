#include <stdio.h>
#define PI 3.14159265359
//Kullanicidan dairenin yaricap degerini alip cevresini ve alanini hesaplayan program.
void daireHesaplama(float yaricap) {
    float alan = PI * yaricap * yaricap;
    float cevre= 2 * PI * yaricap;
    printf("Dairenin Alaný: %.2f\n", alan);
    printf("Dairenin Cevresi: %.2f\n", cevre);
}
int main() {
    float yaricap;
    char tekrar;

    do {
        printf("Dairenin yaricap degerini giriniz: ");
        scanf("%f", &yaricap);
        daireHesaplama(yaricap); 
        printf("Tekrar islem yapmak ister misiniz? (e/h): ");
        scanf(" %c", &tekrar); 
    } while (tekrar == 'e' || tekrar == 'E');

    return 0;
}

