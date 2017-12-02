#include <bits/stdc++.h>
using namespace std;

int main(){
    long long  n;
    double sum;
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        sum=0;
        for(long long i=1;i<=n;i++){
            sum+=log10(i);
        }
        cout<<(int)sum+1<<endl;
    }
}