#include<stdio.h>

// Recursive Function
int sum(int n){
    if(n == 1){
        return 1;
    }
    int sumNum = sum(n-1);
    int sumN = sumNum * n;
    return sumN;
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", sum(n));
    return 0;
}
