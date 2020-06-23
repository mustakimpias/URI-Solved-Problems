#include<stdio.h>

int main()
{
    int a, n = 1, i;
    scanf("%d", &a);
    for(i = a; i >= 1; i--){
        n = n*i;
    }
    printf("%d\n", n);
    return 0;
}
