#include<stdio.h>

int main()
{
    int i, j, T, n, sum;
    scanf("%d", &T);
    for(i = 0; i < T; i++){
        sum = 0;
        scanf("%d", &n);
        for(j = 1; j < n; j++){
            if(n%j==0) {sum+=j;}
        }

        if(sum==n){
            printf("%d eh perfeito\n", n);
        }
        else{
            printf("%d nao eh perfeito\n",n);
        }

    }
    return 0;
}
