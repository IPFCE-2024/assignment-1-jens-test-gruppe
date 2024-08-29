#include <stdio.h>
#define d3 1.609
int main(void){
    double d1,d2;
    printf("Enter the distance in miles> ");
    scanf("%lf", &d1);
    d2=d3*d1;
    printf("That equals %f kilometers.\n", d2);
return (0);
}