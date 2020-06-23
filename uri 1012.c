#include<stdio.h>

int main()
{
    float a,b,c;
    double pi, triangle, circle, trapezium, square, rectangle;
    scanf("%f %f %f", &a, &b, &c);
    pi = 3.14159;
    triangle = .5*a*c;
    circle = pi*(c*c);
    trapezium = (a+b)/2*c;
    square = b*b;
    rectangle = a*b;

    printf("TRIANGULO: %0.3lf\n", triangle);
    printf("CIRCULO: %0.3lf\n", circle);
    printf("TRAPEZIO: %0.3lf\n", trapezium);
    printf("QUADRADO: %0.3lf\n", square);
    printf("RETANGULO: %0.3lf\n", rectangle);
    return 0;
}
