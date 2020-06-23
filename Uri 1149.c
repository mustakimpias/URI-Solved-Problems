#include<stdio.h>

int main()
{
     int a, b, i, c = 0;
    scanf("%d %d", &a, &b);
    while(b < 0 || b == 0){
        scanf("%d", &b);
    }
    for(i = 0; i < b; i++){
        c = c+a+i;
    }
    printf("%d\n", c);
    return 0;
}
