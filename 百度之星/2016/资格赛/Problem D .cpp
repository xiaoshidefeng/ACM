#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<map>
#include <string>  
#include <iostream>
using namespace std;
//char a[100];
int man[100001];
int main()
{
    memset(man,0,sizeof(0));
    map<string,int>acm;
      //string str;
    string a;
    int i,j,k,c=0,zu;
    scanf("%d",&zu);    
//    scanf("%s",a);
    cin >> a;
    k=a.length();
    sort(a.begin(),a.end());
    acm.insert(pair<string,int>(a,0));
    printf("0\n");
     map<string,int>::iterator iter;
    zu--;
    while(zu--)
    {
        
        cin >> a;
        k=a.length();
        sort(a.begin(),a.end());
        iter= acm.find(a);
        //printf("%d",iter->second);
        if(iter==acm.end())
        {
            c++;
        //    acm[c]=a;
            acm.insert(pair<string,int>(a,c));
            printf("0\n");
            continue;
        }
        else
        {
            man[iter->second]++;
            printf("%d\n",man[iter->second]);
        }
    }
    
    
    
        
        
    
}