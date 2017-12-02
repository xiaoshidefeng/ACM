#include <bits/stdc++.h>
using namespace std;

int main(){
 int n,w,d,a;
    
   while(std::cin>>n>>w>>d>>a){
    int t;
    int s;
    s = (n-1)*n/2;
    int y = (s*w)-a;
    t = ((s*w)-a)/d;
    if(y==0){
        std::cout << n << '\n';
    }else{
        std::cout << t << '\n';
    }
   }
}