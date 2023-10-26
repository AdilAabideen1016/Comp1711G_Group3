#include <stdio.h>
#include <string.h>

struct Human {
    char name [20] ;
    int age ;
    int mark ;
    char home [20] ;
};

int main () 
{
    struct Human Adil ;
    strcpy(Adil.name, "Adil Aabideen") ;
    Adil.age = 18 ;
    Adil.mark = 99 ;
    strcpy(Adil.home, "Manchester") ;
    printf("Name and Surname : %s",Adil.name) ;
    printf("Age : %d",Adil.age) ;
    printf("Mark : %d",Adil.mark) ;
    printf("Home : %s",Adil.home) ;

    return 0 ;

}