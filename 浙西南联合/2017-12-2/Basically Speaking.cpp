#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>
#include<iostream>
#include<algorithm>
#include<stack>
#include<cmath>
using namespace std;
                                //定义一个进制转换函数
stack<char> conversion(int num, int jz) {
	stack<char> s;             //定义一个栈
	int t,flag=1;	           //定义一个标记用来判断正负
	char c;
	if(num<0){flag=0;num=-num;}//若为负数标记改变
	do {
		t=num%jz;
		num=num/jz;
		if (t>=10) c='A'+t-10;
		else c=t+'0';
		s.push(c);		       //每次循环取余，然后进栈
	} while(num!=0);	       //循环结束条件为无法再取余
	if(flag==0)s.push('-');    //若有负号，将负号进栈
	return s;
}

int main()
{
	int num=0,jz;
	stack<char> g;
    string b;
    int k;
    
    while(std::cin >>b>>k>>jz){
    num = 0;
    int len = b.length();
    for(int i=len-1;i>=0;i--){
        if('0'<=b[i]&& b[i]<='9'){
            // std::cout << b[i] << '\n';
            num += (b[i]-'0')*(int)pow(k,(len-1-i));
        }else{
            num += (b[i]-'A'+10)*(int)pow(k,(len-1-i));
        }
    }
		g=conversion(num,jz);
        if(g.size()<=7){
            int q = 7-g.size();
            while(q--){
                std::cout << " ";
            }
		while (!g.empty()) {
            
			std::cout << g.top();//若栈不为空，取出栈顶元素
			g.pop();             //将栈顶元素出栈
		}
		std::cout << '\n';

        }else{
            std::cout << "  ERROR" << '\n';
        }
    }

}