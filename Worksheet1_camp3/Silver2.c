#include <stdio.h>
#include <stdlib.h>

int main() {
    float num, x, total, count ;
    char filename[] = "squares.dat";
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("") ;
        return 0 ;
    }

    int buffer_size = 1000 ;
    char line_buffer[buffer_size] ;
    while (fgets(line_buffer, buffer_size, file) != NULL) {
        num = atoi(line_buffer) ;
        total = total + num ; 
        count = count + 1 ;
        
    }

    float average = total / count ;
    printf("The Average of all the numbers is %f\n",average) ;

}