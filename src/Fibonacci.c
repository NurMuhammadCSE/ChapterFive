#include<stdio.h>

int fib(int n){
    if(n == 0){
        return 0;
    }
    
    if(n == 1){
        return 1;
    }
    
    int fibNum1 = fib(n -1);
    int fibNum2 = fib(n - 2);
    int fibNum = fibNum1 + fibNum2;
    printf("fib if %d is : %d\n", n, fibNum);
    return fibNum;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", fib(n));
    return 0;
}
