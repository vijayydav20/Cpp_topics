// program for multilevel inheritance
#include<iostream.h>
class cla{
		public:
		void show_cla(){
		cout<<"this is base  class "<<endl;
		}
		};
class clb : public cla{
		public:
		void show_clb(){
		cout<<"this is base class and child class"<<endl;
		}
		};
class clc : public clb{
		public:
		void show_clc(){
		cout<<"this is child of class"<<endl;
		}
		};		
void main(){
	clc obc;
	obc.show_cla();
	obc.show_clb();
	obc.show_clc();
	;
	}