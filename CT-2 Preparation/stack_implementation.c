#include <stdio.h>
#include <stdlib.h>
#define size 4

int Top=-1,inparray[size];
void Push();
void Pop();
void show();

int main(){
    int choice ; 
    while(1){
        printf("\nOperations performed by Stack");
		printf("\n1.Push the element\n2.Pop the element\n3.Show\n4.End");
		printf("\n\nEnter the choice:");
		scanf("%d",&choice);
        switch(choice){
            case 1:Push();
            break;
            case 2:Pop();
            break;
            case 3:peek();
            break;
            case 4:exit(0);
            default : printf("Invalid Choice \n");
        }
    }
    return 0;
}

void Push(){
    int x;
    if(Top == size-1){
        printf("\nOverFlow");
    }
    else{
        printf("Enter the element to be inserted ");
        scanf("%d",&x);
        Top = Top+1;
        inparray[Top] = x;
    }
}

void Pop(){
    if(Top==-1){
        printf("Empty Strack\n");
    }
    else{
        printf("Popped element is %d\n",inparray[Top]);
        Top--;
    }
}

void peek(){
    if(Top==-1){
        printf("Empty Strack\n");
    }
    else{
        printf("Last element is %d\n",inparray[Top]);
    }
}