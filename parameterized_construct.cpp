// program for parameterized contructor
#include<iostream.h>
class sum{
	int a,b,c;
	public:
	sum(int u ,int v){
	a=u;
	b=v;
	c=a+b;
	cout<<"sum="<<c;	}
};
int main(){
	sum obj(4 ,5);
	
};	
	