#include <stdio.h>
//Girilen sayinin basamak sayisini ve basamaklarinin toplamini bulan (recursive) program.
int basamakSayisi(int number) {
	
	number = (number < 0) ? -number : number;
	
    if (number == 0) {
        return 1;
    } else if (number < 10 && number > -10) {
        return 1;
	} else {
        return 1 + basamakSayisi(number / 10); 
    }
}

int basamakTopla(int number) {
	
	number = (number < 0) ? -number : number;
	
    if (number == 0) {
        return 0;
    } else if(number>0) {
        return (number % 10) + basamakTopla(number / 10); 
    } else{
    	return ((number % 10) + basamakTopla(number / 10))*(-1); 
	}
}

int main() {
    int num, sum, basamak_sayisi;
    char tekrar;
    
    do{

    printf("Islem yapmak istediginiz sayiyi giriniz: ");
    scanf("%d", &num);

    basamak_sayisi = basamakSayisi(num);
    printf("Girdiginiz sayinin basamak sayisi: %d\n", basamak_sayisi);

    sum = basamakTopla(num);
    printf("Girdiginiz sayinin basamaklari toplami: %d\n\n", sum);
     
    printf("Tekrar işlem yapmak ister misiniz? (e/h): ");
        scanf(" %c", &tekrar);
        
	} while (tekrar == 'e' || tekrar == 'E');
	
    return 0;
}

