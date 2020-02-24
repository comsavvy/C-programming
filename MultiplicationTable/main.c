#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x;

    for(int y=1; y<=12; y++){
        printf("Which multiplication table do you want to calculate?\nPress 0 to exit the iteration\n");
        scanf(" %d", &x);
        if(x != 0){
            for(int a=1; a<=12; a++){
                printf("%d * %d = %d\n", x, a, x*a);
            }
        }
        else{
            break;
        }
    }
    return 0;
}
