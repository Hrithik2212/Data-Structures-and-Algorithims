#include <stdio.h>
#include  <stdlib.h>
#define SIZE 100

int inpp_array[SIZE];
int Rear = -1 ;
int Front = -1 ;


void enque(){
    int insert_item;
    if (Rear == SIZE-1){
        printf("Overflow\n");
    }
    else {
        if (Front == -1){
            Front = 0 ;
            printf("Elemenet tot be inserted to the queue :");
            scannf("%d", insert_item);
            Rear ++ ;
            inpp_array[Rear] = insert_item;
        }
    }
}



void deque(){
    if (Front == -1 || Front > Rear){
        printf("Underflow \n");
        return;
    }
    else {
        printf("Elemenet deleted from the array is %d",inpp_array[Front]);
        Front++;
    }
}



int main(){
    return 0;
}