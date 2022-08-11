#include <stdio.h>
/*10. Give the value of the left-hand side variable in each assignment statement. 
Assume the linesare executed sequentially. 
Assume the address of the blocks array is 4434.
int main()
{
char blocks[3] = {'A','B','C'};
char *ptr = &blocks[0];
char temp;
temp = blocks[0];
temp = *(blocks + 2);
temp = *(ptr + 1);
temp = *ptr;
ptr = blocks + 1;
temp = *ptr;
temp = *(ptr + 1);
ptr = blocks;
temp = *++ptr;
temp = ++*ptr;
temp = *ptr++;
temp = *ptr;
return 0;
}*/

int main()
{
char blocks[3] = {'A','B','C'};
char *ptr = &blocks[0];   //A
char temp;                // 
temp = blocks[0];         //A
temp = *(blocks + 2);     //C
temp = *(ptr + 1);        //B
temp = *ptr;              //A
ptr = blocks + 1;         //B
temp = *ptr;              //B
temp = *(ptr + 1);        //C
ptr = blocks;             //A
temp = *++ptr;            //B
temp = ++*ptr;            //B  
temp = *ptr++;            //A  
temp = *ptr;              //A  
return 0;
}