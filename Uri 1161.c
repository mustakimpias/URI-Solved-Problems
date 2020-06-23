#include<stdio.h>

int main()
{
    long long int x,y,num1,num2;
    int i;
    while(scanf("%lld %lld", &x, &y)!=EOF)
    {
        num1=1;
        num2=1;
        for(i=x;i>0;--i){
            num1*=x;
            x--;
        }
        for(i=y;i>0;--i){
            num2*=y;
            y--;
        }

        printf("%lld\n", num1+num2);
    }
    return 0;
}
