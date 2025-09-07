// program for copy constructor
#include<iostream.h>
class sum{
	int a,b,c;
	public:
	sum(){
	a=4;
	b=5;
	c=a+b;}
	sum(sum &add){
		cout<<"a="<<add.a<<endl;
		cout<<"b="<<add.b<<endl;
		cout<<"c="<<add.c<<endl;	}
};
int main(){
	sum obj;
	sum obj1=obj;
	
};	
