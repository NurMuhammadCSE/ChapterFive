#include<stdio.h>

float convertTemp(float celcius);

int main()
{
    float n;
    scanf("%f", &n);
    printf("%f\n", convertTemp(n));
    return 0;
}

float convertTemp(float celcius){
    float far = celcius * (9/5) + 32;
    return far;
}
