#include <stdio.h>

int* fun()
{
    // x now has scope throughout the program
    static int x = 10;

    return &x;
}

int main()
{
    int* p = fun();
    fflush(stdin);

    // Not a dangling pointer as it points
    // to static variable.
    printf("%d", *p);
}