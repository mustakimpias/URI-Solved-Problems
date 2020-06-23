#include<stdio.h>

int main()
{
    int n;
    for(;;){
        scanf("%d", &n);
        if(n==0) break;
        long long int ara[n][n], l, k, m, o, p, i, j;
        l = 1;
        for(i = 0; i < n; i++){
                k = l;
            for(j = 0; j < n; j++){
                ara[i][j]=k;
                k+=k;
            }l+=l;
        }
        for(i = 0; i < n; i++){
            for(j = 0; j < n; j++){
                    if(n==1)printf("%lld", ara[i][j]);
                if(n==2){
                    if(j==0)printf("%lld", ara[i][j]);
                    else printf(" %lld", ara[i][j]);
                }
                else if(n==3 || n==4){
                    if(j==0)printf(" %lld", ara[i][j]);
                    else printf("%3lld", ara[i][j]);
                }
            else if(n==5){
                if(j==0)printf("%3lld", ara[i][j]);
                else printf("%4lld", ara[i][j]);
            }
            else if(n==6 || n==7){
                if(j==0)printf("%4lld", ara[i][j]);
                else printf("%5lld", ara[i][j]);
            }
            else if(n==8 || n==9){
                if(j==0)printf("%5lld", ara[i][j]);
                else printf("%6lld", ara[i][j]);
            }
            else if(n==10){
                if(j==0)printf("%6lld", ara[i][j]);
                else printf("%7lld", ara[i][j]);
            }
            else if(n==11 || n==12){
                if(j==0)printf("%7lld", ara[i][j]);
                else printf("%8lld", ara[i][j]);
            }
            else if(n==13 || n==14){
                if(j==0)printf("%8lld", ara[i][j]);
                else printf("%9lld", ara[i][j]);
            }
            else if(n==15){
                if(j==0)printf("%9lld", ara[i][j]);
                else printf("%10lld", ara[i][j]);
            }
            }printf("\n");
        }printf("\n");
    }
    return 0;
}
