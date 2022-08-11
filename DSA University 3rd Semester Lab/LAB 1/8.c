#include <stdio.h>

/* 8. Write a C program to search an element in array using pointers.*/

int main(){
    int array[] = {1,2,3,4,5,6,7,8};
    int *search ;
    printf("Enter Search element :");
    scanf("%d",search);
    for(int i=0; i<8 ; i++){
        if (*search == *(array+i)){
            printf("The number %d is present at index %d",*search,i);
            break;
        }
        else if (i == 7){
            printf("Element is not present ");
        }     
    }
}
