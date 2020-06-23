#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,n,i;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d %d", &a, &b);
        double c=log10(a);
        c*=b;
        printf("%.0lf\n", (floor)(c+1));
    }
    return 0;
}
