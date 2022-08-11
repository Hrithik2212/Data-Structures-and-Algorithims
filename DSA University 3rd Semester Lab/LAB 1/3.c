#include <stdio.h>

/*
3. Create a function new_integer() that declares and initializes an integer inside the function and
returns the address of that integer. Print out the integer value associated with this memory
address in main.
*/

int* new_intger(){
    int a =3;
    int *p = &a;
    return p;
}

int main(){
    int* a = new_intger();
    printf("Value of a is %d",*a);
}