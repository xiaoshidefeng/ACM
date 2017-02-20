#include<iostream>

#include<algorithm>

#include<cstdlib>

#include<sstream>

#include<cstring>

#include<cstdio>

#include<string>

#include<deque>

#include<cmath>

#include<queue>

#include<set>

#include<map>

using namespace std;

int main (void)

{

int n;

while (cin>>n)

{

getchar();

while (n--)

{

string s;

getline(cin,s);

set<char>pos;

for (int i=0; i<(int)s.size(); i++)

{

if(isalpha(s[i]))

{

pos.insert(s[i]);

}

}

cout<<pos.size()<<endl;

}

}
return 0;

}
