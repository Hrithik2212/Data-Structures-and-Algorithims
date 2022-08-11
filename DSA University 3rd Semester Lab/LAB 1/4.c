#include <stdio.h>

/*
4. Write a program in C to store n elements in an array
 and print the elements using pointer.
*/

int main(){
    int len = 5 ;
    printf("Enter the length of the array : ");
    scanf("%d",&len);
    int array[len] ;
    for (int i=0;i<len;i++){
        printf("Enter element %d : ",i+1);
        scanf("%d",array+i);
    }
    printf("The elements entered are :\n ");
    for(int i=0;i<len;i++){
        printf("%d\n",*(array+i));
    }
    return 0;
}