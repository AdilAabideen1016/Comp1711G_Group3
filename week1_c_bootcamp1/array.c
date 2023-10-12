#include <stdio.h>

int main() 
{
    int a ;
    char mystring[] = "hello" ;

    for (a=4 ; a >= 0 ; a = a - 1) 
    {
        printf("%c\n", mystring[a]);
    }

    return 0 ;
}