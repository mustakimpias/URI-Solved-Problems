#include<stdio.h>

int main()
{
    int x,y;
    float total;
    scanf("%d %d", &x, &y);
    float ar[5] = {4.00, 4.50, 5.00, 2.00, 1.50};
    total = ar[x-1]*y;
    printf("Total: R$ %.2f\n", total);
    return 0;
}
