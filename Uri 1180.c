#include<stdio.h>

int main()
{
    int i, n = 0, t, a, b, p, v;
    scanf("%d %d", &t, &a);
    for(i = 0; i < t-1; i++){
        scanf("%d", &b);
        n++;
        if(i==0){
            if(a < b){
                v = a;
                p = n;
            }
            else{
                v = b;
                p = n;
            }
        }
        else{
            if(b < v){
                v = b;
                p = n;
            }
        }
    }
    printf("Menor valor: %d\n", v);
    printf("Posicao: %d\n", p);
    return 0;
}
