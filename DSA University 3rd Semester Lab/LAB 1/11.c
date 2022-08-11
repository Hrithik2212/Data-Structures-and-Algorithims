#include <stdio.h>
/* 11.Develop an a program for the following:
1. Get the list of n numbers.
2. Scan and print the odd numbers along its positions while you scan the
numbers from 1 to n.
3. Scan and print the even numbers along its positions while you scan the
numbers from n to 1.*/

int main(){
        int num;
        printf("Enter n : ");
        scanf("%d",&num);
        int array[num], i;
        printf("Enter the elements of the array \n");
        for (i = 0; i < num; i++) {
            scanf("%d", &array[i]);
        }
        printf("Even numbers in the array are - ");
        for (i = 0; i < num; i++) {
            if (array[i] % 2 == 0) {
                printf("%d \t", array[i]);
            }
        }
 
        printf("\n Odd numbers in the array are -");
        for (i = 0; i < num; i++) {
            if (array[i] % 2 != 0) {
                printf("%d \t", array[i]);
            }
        }
}