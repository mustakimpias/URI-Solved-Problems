#include<stdio.h>

int main()
{
    int a, b, i;
    for(i = 0; i < 100; i++){
        scanf("%d %d", &a, &b);
        if(a==b){
            break;
        }
        if(a>b){
            printf("Decrescente\n");
        }
        else{
            printf("Crescente\n");
        }
    }

    return 0;
}
