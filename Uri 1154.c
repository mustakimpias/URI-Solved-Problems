#include<stdio.h>

int main()
{
    int n, c = 0;
    float average, x = 0;
    while(1){
        scanf("%d", &n);
        if(n<0){
            break;
        }
        else{
            c += n;
            x++;
        }

    }
    average = c/x;
    printf("%.2f\n", average);
    return 0;
}
