#include<stdio.h>

int main()
{
    int NUMBER,B;
    float SALARY, C;
    scanf("%d %d %f", &NUMBER, &B, &C);
    SALARY=B*C;

    printf("NUMBER = %d\n", NUMBER);
    printf("SALARY = U$ %0.2f\n", SALARY);
    return 0;
}
