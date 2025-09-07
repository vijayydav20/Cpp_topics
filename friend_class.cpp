//program for friend class
#include<iostream.h>
class c1{
	int a,b;
	public:
	c1(){
		a=1;
	b=2;}
	
	friend class c2;
	};
class c2{
		int m,n;
		public:
  c2()  {
     m=3;
     n=4;}
	 void display(c1 obj1)
	 {cout<<"a="<<obj1.a<<endl;
	 cout<<"b="<<obj1.b<<endl;}
	friend class c3;
	};
class c3{
	public:
	void show(c2 obj2)
	{cout<<"m="<<obj2.m<<endl;
	cout<<"n="<<obj2.n<<endl;}
};
int main(){
	c1 ob1;
	c2 ob2;
	c3 ob3;
	ob2.display(ob1);
	ob3.show(ob2);
}	
	