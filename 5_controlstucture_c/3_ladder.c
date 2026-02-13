#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter numbers 1: ");
    scanf("%d", &a);

     printf("Enter numbers 2: ");
    scanf("%d", &b);

     printf("Enter numbers 3: ");
    scanf("%d", &c);

    if(a > b && a > c) {
        printf("A is Largest");
    }
    else if(b > c) {
        printf("B is Largest");
    }
    else {
        printf("C is Largest");
    }

    return 0;
}
