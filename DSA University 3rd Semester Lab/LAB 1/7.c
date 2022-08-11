#include <stdio.h>

/*7. Write a program in C to compute the sum of all elements in an array using pointers.*/

int main(){
    int array[]= {1,2,3,4,5};
    int sum = 0;
    for (int i=0;i<5;i++){
        sum += *(array+i);
    }
    printf("Sum = %d",sum);
}
