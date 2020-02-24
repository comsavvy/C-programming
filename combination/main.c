#include <stdio.h>
#include <stdlib.h>
void intro();
void calAspect();
int factorial(int x);
int combination(int a, int b);
int permutation(int a, int b);
int main(){
    char exitPoint;
    printf("\t\tWhat do you want to calculate? \n");
    intro();
    calAspect();
    while(1){
        printf("\n\nDo you still want to calculate [y/n]? ");
        scanf(" %c", &exitPoint);
        printf("\n");
        if (exitPoint=='y'){
            intro();
            calAspect();}
        else if(exitPoint=='n') break;
        else printf("Unknown!");
    }
    return 0;
 }
void intro(){
    printf("To calculate Factorial----> Enter 1\n");
    printf("To calculate Combination--> Enter 2\n");
    printf("To calculate Permutation--> Enter 3\n");
}
void calAspect(){
    int temp, a, b;
    printf(">>>> ");
    scanf(" %d", &temp);
    if (temp == 1){
        puts("\t\tFactorial");
        printf("n: ");
        scanf(" %d", &a);
        printf("%d!= %d", a, factorial(a));
    }else if ( temp ==2){
        puts("\t\tCombination");
        printf("The value of n must be greater than r\n");
        printf("n: ");
        scanf(" %d", &a);
        printf("r: ");
        scanf(" %d", &b);
        printf("%dC%d: %d", a, b, combination(a, b));
    }else if ( temp ==3){
        puts("\t\tPermutation");
        printf("The value of n must be greater than r\n");
        printf("n: ");
        scanf(" %d", &a);
        printf("r: ");
        scanf(" %d", &b);
        printf("%dP%d: %d", a, b, permutation(a, b));
    }else printf("Check input!");
}
int factorial(int x){
    if ( x == 0)return 1;
    else return x * factorial(x-1);
}
int combination(int a, int b){
    return factorial(a)/(factorial(a-b)*factorial(b));
}
int permutation(int a, int b){
   return factorial(a)/factorial(a-b);
}
