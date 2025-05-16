#include <stdio.h>
int main() {
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9.0 / 5.0) + 32;

    printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);

    return 0;
}


OUTPUT:

Enter temperature in Celsius: 27
27.00 Celsius = 80.60 Fahrenheit
