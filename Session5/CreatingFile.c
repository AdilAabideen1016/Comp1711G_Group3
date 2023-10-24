#include <stdio.h>
#include "utils.h"

int main() {
    char filename [] = "data.txt";
    FILE *file = open_file(filename, "r");
    

    int number, num_lines = 10;
    printf("Type %d numbers: ", num_lines);
    for (int i = 0; i < num_lines; i++) 
    {
        scanf("%d", &number);
        fprintf(file, "%d\n", number);
    }
    
    int buffer_size = 100;
    char line_buffer[buffer_size];
    while (fgets(line_buffer, buffer_size, file) != NULL) 
    {
        
        printf("%s", line_buffer);
    }


    fclose(file);
    return 0;
}