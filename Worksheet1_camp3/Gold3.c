#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

int main()
{
    float num ;
    int x ;
    float count ;
    float total ;
    char Filename[] = "numbers.dat" ;
    FILE *file = open_file(Filename,"r") ;
    

    int buffer_size = 100 ;
    char line_buffer[buffer_size] ;
    while (fgets(line_buffer, buffer_size, file) != NULL ) {
        num = atof(line_buffer) ;
        total = total + num ;
        count = count + 1 ;
    }

    float average = total / count ;
    fclose(file) ; 
    FILE *file2 = open_file(Filename,"a") ;
    fprintf(file2, "%f\n", average) ;

     

    fclose(file);
    return 1 ;
}