#include<stdio.h>

// Function Definetion
void Hello() {
    printf("Hello\n");
}

void GoodBuy() {
    printf("Good Buy\n");
}

void salam() {
    printf("Assalamualaikum\n");
}

int sum(int x, int y) {
    return x + y;
}

void table(int n) {
    for(int i = 1; i <= 10; i++) {
        printf("%d\n", i * n);
    }
}

void calculatedPrice(float value) {
    value = value + (.18 * value);
    printf("Final Price %f\n", value);
}
int main()
{
    Hello();
    GoodBuy();

    char ch;
    printf("Enter a Character : ");
    scanf("%c", &ch);

    if(ch == 's') {
        salam();
    } else {
        Hello();
    }

    int a, b;
    printf("Enter a Number : ");
    scanf("%d", &a);

    printf("Enter a Number : ");
    scanf("%d", &b);

    int s = sum(a, b);
    printf("%d\n", &s);

    int n;
    scanf("%d", &n);
    table(n);
    
    float value = 100.00;
    calculatedPrice(value);
    
    int n2 = 2;
    printf("%f\n",pow(n2,2));

    return 0;
}