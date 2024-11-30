#include<stdio.h>
#include<stdlib.h>

float celsiusToFahrenheit(float);
float fahrenheitToCelsius(float);

int main()
{
    char choose;
    float number;
    printf("Fahrenheit -> Celsius (F)\n");
    printf("Celsius -> Fahrenheit (C)\n");
    printf("Your choose : ");
    scanf("%c",&choose);
    switch(choose)
    {
        case 'F':
            printf("Please enter Fahrenheit : ");
            scanf("%f",&number);
            printf("%.3f Fahrenheit = %.3f Celsius",number, fahrenheitToCelsius(number));
            break;
        case 'C':
            printf("Please enter Celsius : ");
            scanf("%f",&number);
            printf("%.3f Celsius = %.3f Fahrenheit",number, celsiusToFahrenheit(number));
            break;
        default:
            printf("Please don't do this..");
    }
    return 0;
}

float celsiusToFahrenheit(float x)
{
    float Fahrenheit = 0;
    Fahrenheit = (x * 9/ 5) + 32;
    return Fahrenheit;
}

float fahrenheitToCelsius(float x)
{
    float Celsius = 0;
    Celsius = (x-32) * 5 / 9;
    return Celsius;
}
