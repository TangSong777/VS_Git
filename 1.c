#include <stdio.h>
#include "YHL.h"

int main()
{
    int a = 0, b = 1;
    int c = add2(a, b);
    int d = add3(a, b, c);
    printf("%d", c);
    printf("Hello World!");
    return 0;
}