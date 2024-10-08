#include <stdio.h>
#include <string.h>

void TersCevir(char dizi[], int n) {
	int i;
    for (i = 0; i < n / 2; i++) {
        char temp = dizi[i];
        dizi[i] = dizi[n - i - 1];
        dizi[n - i - 1] = temp;
    }
}

int main() {
    char tekrar;
    do{
	
        char cumle[100];
        printf("Islem yapmak istediginiz cumleyi giriniz:");
        fgets(cumle, sizeof(cumle), stdin);

        cumle[strcspn(cumle, "\n")] = '\0';

        int n = strlen(cumle);
        
        printf("\nCumlenin orjinal hali : %s\n", cumle);

        TersCevir(cumle, n);

        printf("\nCumlenin ters cevrilmis hali: %s\n", cumle);
        
        printf("\nTekrar islem yapmak ister misiniz? (e/h): ");
        scanf(" %c", &tekrar);
        getchar(); 

    } while (tekrar == 'e' || tekrar == 'E');

    printf("Program sonlandirildi.\n");
    return 0;
}

