#include <stdio.h>

int main() {
    // Déclaration d'un tableau pour stocker 100 réels
    float Tab[100];

    // Saisie des 100 réels
    for (int i = 0; i < 100; i++) {
        printf("Saisir le réel %d : ", i + 1);
        scanf("%f", &Tab[i]);
    }

    // Affichage des réels dans l'ordre inverse
    printf("Les réels dans l'ordre inverse :\n");
    for (int i = 99; i >= 0; i--) {
        printf("%f\n", Tab[i]);
    }

    return 0;
}
