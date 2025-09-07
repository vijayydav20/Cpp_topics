// program for singal inheritance
#include<iostream.h>
class ab{
		public:
		void show_ab(){
		cout<<"this is base class"<<endl;
		}
		};
class abc : public ab{
		public:
		void show_abc(){
		cout<<"this is child class";
		}
		};		
void main(){
abc ob1;
ob1.show_ab();
ob1.show_abc();
	}