#include <stdio.h>

int main() 
{
    int num, x ;
    char filename[] = "squares.dat";
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("") ;
        return 0 ;
    }

    printf("Please enter the amount of squares");
    scanf("%d", &num) ;

    for (x=1 ; x <= num ; x++) {
        int square = x * x ;
        fprintf(file,"%d\n", square) ;
    }

    fclose(file) ;
    return 1 ;
}