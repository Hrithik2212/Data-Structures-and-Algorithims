#include <iostream>
#include <string>
#include <vector>
using namespace :: std ;
void D(int N){vector <int> b(N+1);}

int main(){
    int N,T,k;
    cin>>T ;
    for(k=1;k<=T;k++){
        string s; 
        cin >> N >> s;
        int i=-1,a = ceil(((float)N)/2) , ans = INT_MIN ;
        for(i=0;i<N;i++){
            int d=i,c=0,sum;
            while(d<N && c++<a)
                sum += s[d++]-48 ;
            ans = max(ans,sum);
        }
        printf("%d\n",ans);
    }
}
