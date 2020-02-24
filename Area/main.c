#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.142
void calAreaOfCircle();
float areaOfCircle(float r);
float areaOfTriangle(int b, int h);
float result[100], radius[100];
int main()
{
    calAreaOfCircle();
    printf("%f \n",result[1]);
    return 0;
    }
void calAreaOfCircle(){
int i=0;
printf("Enter 0 for radius to exit the iteration\n");
   while(1){
        printf("Radius: ");
        scanf("%f", &radius[i]);
        result[i]= areaOfCircle(radius[i]);
        if (radius[i]==0)break;
        printf("Area: %.3f\n", result[i]);
        ++i;
    }
}
float areaOfCircle(float r){
float a= PI * pow(r, 2);
return a;
}
float areaOfTriangle(int b, int h){
float area= 1/2 * b * h;
return area;
}
