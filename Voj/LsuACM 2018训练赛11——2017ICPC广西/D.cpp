#include <iostream>  
#include <cstddef>  
#include <cstring>  
#include <vector>  
using namespace std;  
typedef long long ll;  
const int mod=1e9+7;  
typedef vector<ll> vec;  
typedef vector<vec> mat;  
mat mul(mat &a,mat &b)
{  
    mat c(a.size(),vec(b[0].size()));  
    for(int i=0; i<4; i++)  
    {  
        for(int j=0; j<4; j++)  
        {  
            for(int k=0; k<4; k++)  
            {  
                c[i][j]+=a[i][k]*b[k][j];  
                c[i][j]%=mod;  
            }  
        }  
    }  
    return c;  
}  
mat pow(mat a,ll n)  
{  
    mat res(a.size(),vec(a.size()));  
    for(int i=0; i<a.size(); i++)  
        res[i][i]=1;//��λ����  
    while(n)  
    {  
        if(n&1) res=mul(res,a);  
        a=mul(a,a);  
        n/=2;  
    }  
    return res;  
}  
ll solve(ll n)  
{  
    mat a(4,vec(4));  
//    a[0].clear();
    a[0][0]=1;  
    a[0][1]=5;
    a[0][2]=1;  
    a[0][3]=-1;
    
    a[1][0]=1;

    a[2][1]=1;

    
    a[3][2]=1;

    
    a=pow(a,n);  
    return a[0][1];//Ҳ������a[1][0];  
}  
int main() 
{  
    ll n;  
    while(cin>>n&&n!=-1)  
    {  
        cout<<solve(n)<<endl;  
    }  
    return 0;  
}  
