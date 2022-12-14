#include <stdio.h>

int check(int s){
    int n , sum =0 ;
    for(n=1;sum<s;n++){
        sum += n;
    }
    if (sum == s ) return 1;    
    else return -1;
}

int main(){
    int n , i , flag = 0 ;
    scanf("%d",&n);
    for(i=0;i<n/2;i++){
        if(check(i)==1){
            if (check(n-i)==1){
                flag = 1;
            }
        }
    }
    flag==1?printf("YES"):printf("NO") ;
    return 0;
}