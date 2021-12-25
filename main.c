#include <stdio.h>
#include <math.h>
#define FACETS_QUANTITY 6 
int main() {
double rebro; double ploschad;
printf("Enter the length of the edge\n");
scanf("%lf",&rebro);
ploschad=rebro*rebro*FACETS_QUANTITY;
printf("Area of the cube is = ");
printf("%f",ploschad);
}
