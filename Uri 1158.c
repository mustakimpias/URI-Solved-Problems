#include<stdio.h>

int main()
{
    int t, i, a, b, s = 0, j;
    scanf("%d", &t);
    for(i = 0; i < t; i++){
        scanf("%d %d", &a, &b);
        if(a%2==0) a++;
        for(j = 0; j < b; j++){
            s += a;
            a += 2;
        }
        printf("%d\n", s);
        s = 0;
    }
    return 0;
}
