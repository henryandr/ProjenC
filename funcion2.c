#include <math.h>
#include "funcion2.h"

int Primo(int numero) {
    int i;
    for (i = 2; i <= sqrt(numero); i++) {
        if (numero%i == 0) {
            return 0;
        }
    }
    return 1;
}