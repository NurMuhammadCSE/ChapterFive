#include<stdio.h>

void printHW(int count){
    if(count == 0){
        return;
    }
    printf("Hello World\n");
    printHW(count - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    
    printHW(n);
    return 0;
}
