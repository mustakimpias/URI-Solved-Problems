#include<stdio.h>

int main()
{
    int a,b,c,s;
    double area;
    for(;;){
        scanf("%d", &a);
        if(a==0) break;
        scanf("%d %d", &b, &c);
        area=(a*b*100.0)/c;
        for(s=1; s*s<=area;s++);
        s--;
        printf("%d\n", s);
    }
    return 0;
}
