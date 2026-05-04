#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double celsius = 0.0, farenheit = 0.0;
    printf("Entrez votre température en C° :");
    scanf("%lf", &celsius);
    farenheit = celsius*9/5+32;
    printf("La température %.0lf °C en farenheit représente %.1lf °F\n", celsius, farenheit); 
    return 0;
}