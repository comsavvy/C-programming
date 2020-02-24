#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;

    printf("Input Any Positive Integer: ");
    scanf(" %d", &number);

    printf("\t\tThe factors of %d are:\n", number);
    for (int x=1; x<= number; x++){
            if (number % x == 0){
                    printf("%d\n", x);
    }
    }
    return 0;
}
