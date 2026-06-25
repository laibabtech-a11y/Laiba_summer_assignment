#include <stdio.h>

int main() {
    int n, sum;

    printf("enter the value of  N: ");
    scanf("%d", &n);

    if (n<=0) {
        printf("please enter a positive integer.\n");
    } else {
        sum = n * (n + 1) / 2;
        printf("the sum of first %d natural numbers is: %d\n", n, sum);
    }

return 0;
}