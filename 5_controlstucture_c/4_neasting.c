#include <stdio.h>

int main() {
    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    if(num % 5 == 0) {
        if(num % 11 == 0) {
            printf("Divisible by 5 and 11");
        }
        else {
            printf("Divisible by 5 but not 11");
        }
    }
    else {
        printf("Not divisible by 5");
    }

    return 0;
}
