#include<stdio.h>

int main()
{
    int a,b,i,j,x,y,c=1;
    scanf("%d %d", &a, &b);
    x = b/a;
    y = a;
    for(i = 1; i <= x; i++){
        printf("%d", c);
        for(j = c+1; j<=y; j++)
        printf(" %d", j);
        printf("\n");
        c += a;
        y +=a;
    }

    return 0;
}
