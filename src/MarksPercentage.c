#include<stdio.h>

int MarksPercentage(m,c,p,b){
    return (m + c + p + b) / 4;
}
int main()
{

    int m;
    scanf("%d", &m);
    
    int p;
    scanf("%d", &p);
    
    int c;
    scanf("%d", &c);
    
    int b;
    scanf("%d", &b);
    
    int final = MarksPercentage(m,c,p,b);
    printf("Your Average Mark is :  %d\n", final);
    return 0;
}
