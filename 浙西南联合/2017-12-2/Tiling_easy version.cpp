#include <bits/stdc++.h>
using namespace std;

int f(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    if(n==2) return 3;
    // if(n==3) return 5;
    // if(n==4) return 10;
    return f(n-1)+f(n-2)*2;
}
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        // if(n==1) printf("1\n");
        // else if(n==2) printf("3\n");
        // else if(n==3) printf("5\n");
        // else 
        printf("%d\n",f(n));
    }
}