#include <stdio.h>

// Pointer kullanarak faktoriyel hesaplayan program.
void findFactorial(int, unsigned long long*);

int main() {
    unsigned long long fact;   
    int num1;   

    printf("Bir sayi giriniz: ");
    scanf("%d", &num1);
    
       if (num1 < 0) {
        printf("Negatif sayilarin faktoriyeli hesaplanamaz.\n");
    } else {
        findFactorial(num1, &fact);
        printf("%d sayisinin faktoriyeli: %llu\n", num1, fact);
    }

    return 0;
}

void findFactorial(int n, unsigned long long *f) {
    int i;
    *f = 1; 
    for (i = 1; i <= n; i++) {
        *f = *f * i;
    }
}

