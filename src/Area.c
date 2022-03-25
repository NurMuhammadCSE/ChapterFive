#include<stdio.h>

float squareArea(float a){
    return a * a;
}

float circleArea(float rad){
    return 3.14 * rad * rad;
}

float rectangleArea(float a, float b){
    return a * b;
}

int main()
{
    float a;
    scanf("%f", &a);
    
    float b;
    scanf("%f", &b);
    printf("Area of Square : %.3f\n", squareArea(a));
    
    printf("Area of Circle : %.4f\n", circleArea(a));
    
    printf("Area of Rectangle : %.2f\n", rectangleArea(a,b));
    return 0;
}
