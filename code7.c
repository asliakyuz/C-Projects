#include<stdio.h>
//Girdi olarak alinan cumlede bulunan buyuk harf sayisini yazdiran program.

int main(void) {
    char cumle[1000];
    char tekrar;
    int i, harfSayisi, buyukHarf, kucukHarf;

    do {
        harfSayisi = buyukHarf = kucukHarf = 0; 
        printf("Bir cumle giriniz: ");
        getchar(); 
        fgets(cumle, sizeof(cumle), stdin);
        
        for (i = 0; cumle[i] != '\0'; i++) {
            if ((cumle[i] >= 'A' && cumle[i] <= 'Z')) {
                buyukHarf++; 
                harfSayisi++; 
            }
            else if ((cumle[i] >= 'a' && cumle[i] <= 'z')) {
                kucukHarf++;  
                harfSayisi++; 
            }
   }
    printf("Cumlede toplam %d harf, %d buyuk harf ve %d kucuk harf bulunuyor.\n", harfSayisi, buyukHarf, kucukHarf);

        printf("Tekrar islem yapmak ister misiniz? (e/h): ");
        scanf(" %c", &tekrar);

    } while (tekrar == 'e' || tekrar == 'E');

    printf("Program sonlandirildi.\n");
    return 0;
}

