#include<stdio.h>

int main()
{
    int i, j, T, n, k;
    scanf("%d", &T);
    for(i = 0; i < T; i++){
            k = 0;
        scanf("%d", &n);
        if(n < 4) printf("%d eh primo\n", n);

        else{
            for(j = 2; j < n; j++){
                if(n%j == 0){
                    k = 1;
                    break;
                }
                else k = 2;

            }
        }
        if(k==1) printf("%d nao eh primo\n", n);

        else if(k==2) printf("%d eh primo\n", n);

    }
    return 0;
}
