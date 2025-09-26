#include <stdio.h>
#include "add.h"
#include "mul.h"
#include "sub.h"

int main() {
    int a;
    int b;

    printf("Enter num1 : ");
    scanf("%d", &a);

    printf("Enter num2 : ");
    scanf("%d", &b);

    printf("Sum : %d\n", add(a,b));
    printf("Difference : %d\n", sub(a,b));
    printf("Product : %d\n", mul(a,b));

    return 0;
}

