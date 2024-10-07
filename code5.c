#include <stdio.h>
#define ORAN 1.6009344
//Bir arabanin gittigi yolu milden kilometreye kilometreden mile ceviren program.
int main(void){
	char sec,tekrar;
	float mesafe;
	do{
	printf("Hangi cins ile islem yapmak istersiniz?\n");
	printf("(Mil: M\\m veya Kilometre: K\\k):");
	scanf(" %c",&sec);
	
	if((sec=='M')||(sec=='m')){
		printf("Kac mil yol aldiniz:");
		scanf("%f",&mesafe);
		printf("%6.2f Mil = %6.2f Kilometre\n",mesafe, mesafe*ORAN);	
	} else if((sec=='K')||(sec=='k')){
		printf("Kac kilometre yol aldiniz:");
		scanf("%f",&mesafe);
		printf("%6.2f Kilometre = %6.2f Mil\n",mesafe, mesafe/ORAN);	
	} else {
	printf("Yanlis harf girildi.");
	}
	printf("Tekrar islem yapmak ister misiniz? (e/h): ");
    scanf(" %c", &tekrar);
	}
	while (tekrar == 'e' || tekrar == 'E');
	
    printf("Program sonlandirildi.\n");
	
	return (0);
}
