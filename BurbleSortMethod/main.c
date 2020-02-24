#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>


int main()
{
    int init= 10;
    int temp, arr[init];

    for(int a=0; a<init; a++){
        arr[a]= (rand()%25)+1;
    }
    printf("Scatter Array\n");
    for(int a=0; a<init; a++){
    printf("%d\n", arr[a]);
    }
    while(1){
    int e=0;
    for(int a=0; a<init-1; a++){
        if(arr[a]>arr[a+1]){
            temp= arr[a];
            arr[a]= arr[a+1];
            arr[a+1]= temp;
            e=1;
        }
    }
    if (e==0)break;
    }
    printf("The sorted Array\n");
    for(int a=0; a<init; a++){
    printf("\n%d\n", arr[a]);
    }

    return 0;
}
