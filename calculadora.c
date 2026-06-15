#include <stdio.h>

void suma();
float resta(float,float);
void resta();
float divison(float, float);

int main() {
    float a,b;
    printf("calculadora sencilla ");
    return 0;
}

void suma() {

}

float resta(float a, float b) {

    return 0;
}

void resta() {

}

float divison(float a, float b) {
    if (b == 0) {
        printf("Error: division entre cero\n");
        return 0;
    }
    return a / b;
}
 
void multiplicacion() {
    float a, b;
    printf("Dame el primer numero: ");
    scanf("%f", &a);
    printf("Dame el segundo numero: ");
    scanf("%f", &b);
    printf("El resultado de la multiplicacion es: %.2f\n", a * b);
}
