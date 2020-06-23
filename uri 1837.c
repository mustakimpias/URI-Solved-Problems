#include<stdio.h>

int main()
{
	int a,b,r,q;
	scanf("%d %d", &a, &b);
	r=a%b;
	if(r<0) r+=abs(b);
	q=(a-r)/b;
	printf("%d %d\n", q, r);
    return 0;
}
