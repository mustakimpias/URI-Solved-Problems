#include<stdio.h>

int main()
{
    int i, j, k, l, m, n;
    for(;;){
        scanf("%d", &n);
        if(n==0) break;
        int ara [n][n];
        for(i=0; i<n; i++){
                m=i+1;
                k=2;
            for(j=0; j<=i; j++, m--){
                ara[i][j]=m;
            }
                for(j=i+1; j<n; j++, k++){
                    ara[i][j]=k;
            }
        }
        for(i=0; i<n; i++){
            for(j=0; j<n; j++){
                if(j==0) printf("%3d", ara[i][j]);
                else printf(" %3d", ara[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
