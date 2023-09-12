#include <stdio.h>

int main() {
    int interruptorA, interruptorB, interruptorC;
    printf("Introduce 1 para encender la bombilla A o 0 para apagarla: ");
    scanf("%d", &interruptorA);
    printf("Introduce 1 para encender la bombilla B o 0 para apagarla: ");
    scanf("%d", &interruptorB);
    printf("Introduce 1 para encender la bombilla C o 0 para apagarla: ");
    scanf("%d", &interruptorC);

    if (interruptorA && !interruptorB && !interruptorC) {
        printf("La bombilla 1 se enciende.\n");;
        printf("La bombilla a 2 y 3 se apagan");;
    } else if (!interruptorA && interruptorB && !interruptorC) {
        printf("La bombilla 2 se enciende.\n");;
        printf("La bombilla a 1 y 3 se apagan");;
    } else if (!interruptorA && !interruptorB && interruptorC) {
        printf("La bombilla 3 se enciende.\n");;
        printf("La bombilla 1 y 2 apagan. \n");;
    } else if (interruptorA && interruptorB && !interruptorC) {
        printf("La bombilla 1 y 2 se encienden.\n");;
        printf("La bombilla a 3 se apagan");;
    } else if (!interruptorA && interruptorB && interruptorC) {
        printf("La bombilla 2 y 3 se encienden.\n");;
        printf("La bombilla a 1 se apagan");;
    } else if (interruptorA && !interruptorB && interruptorC) {
        printf("La bombilla 1 y 3 se encienden.\n");;
        printf("La bombilla a 2 se apagan");;
    } else if (interruptorA && interruptorB && interruptorC) {
        printf("La bombilla 1,2 y 3 se encienden.\n");;
        } else if (!interruptorA && !interruptorB && !interruptorC) {
        printf("Ninguna se encienden.\n");;
    } else if (!interruptorA && interruptorB && interruptorC) {
        printf("La bombilla 1 se apaga.\n");;
    }

    return 0;
}




