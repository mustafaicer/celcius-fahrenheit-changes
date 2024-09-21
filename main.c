#include<stdio.h>
#include<stdlib.h>

float celciusToFahrenheit(float);
float fahrenheitToCelcius(float);

int main()
{
    char choose;
    float number;
    printf("Fahrenheit -> Celcius (F)\n");
    printf("Celcius -> Fahrenheit (C)\n");
    printf("Your choose : ");
    scanf("%c",&choose);
    switch(choose)
    {
        case 'F':
            printf("Please enter Fahrenheit : ");
            scanf("%f",&number);
            printf("%.3f Fahrenheit = %.3f Celcius",number, fahrenheitToCelcius(number));
            break;
        case 'C':
            printf("Please enter Celcius : ");
            scanf("%f",&number);
            printf("%.3f Celcius = %.3f Fahrenheit",number, celciusToFahrenheit(number));
            break;
        default:
            printf("Please don't do this..");
    }
    return 0;
}

float celciusToFahrenheit(float x)
{
    float Fahrenheit = 0;
    Fahrenheit = (x * 9/ 5) + 32;
    return Fahrenheit;
}

float fahrenheitToCelcius(float x)
{
    float Celcius = 0;
    Celcius = (x-32) * 5 / 9;
    return Celcius;
}
