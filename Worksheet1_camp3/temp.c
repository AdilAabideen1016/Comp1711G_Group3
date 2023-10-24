#include <stdio.h>

int main()
{
    int x ;
    float num;
    char filename[] = "numbers.dat" ;
    FILE *file = fopen(filename, "w") ;
    if ( file == NULL) {
        perror("");
        return 1;
    }

    for (x=0; x<3 ; x++){
        printf("Please enter a float num");
        scanf("%f", &num);
        fprintf(file, "%f\n", num);
    }

    fclose(file);
    return 0 ;
}