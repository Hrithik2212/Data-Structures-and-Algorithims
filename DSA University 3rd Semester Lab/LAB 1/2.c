#include <stdio.h>

/* 2. Create a simple function print_addr(int x) whose sole purpose is to print the address of the
integer x passed to it. Create an integer variable in main, print out its address, and then pass
that variable to print_addr
*/
void print_addr(int *x){
    printf("Address of given variable = %d is %d",*x,x);
}

int main(){
    int a = 3;
    printf("Address of a is %d\n",&a);
    print_addr(&a);
    return 0;
}