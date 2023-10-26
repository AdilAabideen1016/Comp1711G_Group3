#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    float x_coordinate ;
    float y_coordinate ;
} point ;

int main() {
    int number_of_coordinates = 10, i ;
    point points [10];
    float a = 5.0 ;
    for (i = 0 ; i < number_of_coordinates ; i++) {
        points[i].x_coordinate = (float)rand()/(float)(RAND_MAX/a);
        points[i].y_coordinate = (float)rand()/(float)(RAND_MAX/a);
        printf("-------------\n");
        printf("The X coordinate : %f\n",points[i].x_coordinate);
        printf("The Y coordinate : %f\n",points[i].y_coordinate);
    };
    return 0 ;
}
