#include <stdio.h>
#include <string.h>

typedef struct {
    char brand [20] ;
    char model [20] ;
    int top_speed ;
} car ;

int main() {
    int number_of_cars = 5, i ;
    car cars [] = {
        {"Mercedes", "C-Class", 128},
        {"BMW", "3 Series", 192},
        {"Audi", "Q7", 250},
        {"Ford ", "Raptor", 192},
        {"GMC", "Yukon", 118},
    };

    for ( i=0 ; i < 5 ; i++) {
        printf("----------------\n");
        printf("Name : %s\n",cars[i].brand);
        printf("Model : %s\n",cars[i].model);
        printf("Top Speed : %d\n",cars[i].top_speed);
    } ;

    return 0 ;
}