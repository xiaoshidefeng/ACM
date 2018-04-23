#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;
string g[20];
const int maxn=100;  
bool vis[maxn][maxn]; 
int dir[4][2]={0,1,0,-1,1,0,-1,0};

struct Node{
	int x;
	int y;
};


bool CheckState(Node s)   
{  
    if(!vis[s.x][s.y] )          
        return true;  
    else   
    	return false;  
}  
  
void bfs(Node st)  
{  
    queue <Node> q; 
    Node now,next; 
    q.push(st);   
    vis[st.x][st.y]=1;
    while(!q.empty())  
    {  
        now=q.front(); 
        if(now==G)
        {  
             
            return;  
        }  
    for(int i=0;i<4;i++)  
    {  
        next.x=now.x+dir[i][0]; 
        next.y=now.y+dir[i][1];   
        if(CheckState(next)) 
        {  
            q.push(next);  
            vis[next.x][next.y]=1; 
        }  
    }  
    q.pop();
    }  
 return;  
}

int main()
{
	for(int i=0;i<9;i++){
		cin>>g[i];
	}
	for(int i=0;i<9;i++){
		for(j=0;j<9;j++){
			if(check(i,j)){
				cout<<"ok"<<endl;
				return 0;
			}
		}
	}
	cout<<"false"<<endl;
}

