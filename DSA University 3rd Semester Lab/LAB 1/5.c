#include <stdio.h>
/* 5. Write a program in C to find the factorial of a given number using pointers.
*/

int main(){
    int *f ;
    printf("Enter the number : ");
    scanf("%d",f);
    int fact =1  ; 
    for(int i= 0 ;i<*f;i++){
        fact = fact * (*f-i);
    }
    printf("%d! = %d",*f,fact);
}