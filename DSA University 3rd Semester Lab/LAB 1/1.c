#include <stdio.h>

/*1. Write a function to swap two integers. The function should take two pointer arguments.
Display the values before and after the swap */
void swap(int *a,int*b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a,b;
    a=3 ; b=4;
    swap(&a,&b);
    printf("Swapping\n");
    printf("a = %d , b =%d",a,b);
    return 0;
}