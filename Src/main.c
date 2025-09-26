#include <stdio.h>
#include "add.h"
#include "mul.h"

int main() {
    int a = 8;
    int b = 4;

    printf("Sum : %d\n", add(a,b));
    printf("Product : %d\n", mul(a,b));

    return 0;
}

