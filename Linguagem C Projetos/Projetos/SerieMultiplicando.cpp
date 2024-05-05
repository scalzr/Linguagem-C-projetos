#include <stdio.h>

int main() {
    int num_terms;
    
    printf("Digite o numero de termos desejados: ");
    scanf("%d", &num_terms);
    
    int series[num_terms];
    series[0] = 2;
    
    for (int i = 1; i < num_terms; i++) {
        if (i % 3 == 1) {
            series[i] = series[i - 1] * 3;
        } else if (i % 3 == 2) {
            series[i] = series [i - 1] * 4;
        } else {
            series[i] = series[i - 1] * 7 / 3;
        }
    }
    
    printf("Serie gerada:\n");
    for (int i = 0; i < num_terms; i++) {
        printf("%d", series[i]);
        if (i < num_terms - 1) {
            printf(", ");
        }
    }
    printf("\n");
    
    return 0;
}
