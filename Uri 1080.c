#include<stdio.h>

int main()
{
    int i, n, a, b = 0;
    for(i = 1; i <= 100; i++){
        scanf("%d", &n);
        if(n>b){
            b = n;
            a = i;
        }
    }
    printf("%d\n%d\n",b, a);
    return 0;
}
