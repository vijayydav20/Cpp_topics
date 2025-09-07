// multiple inheritance
#include<iostream.h>
class cla{
		public:
		void show_cla(){
		cout<<"this is class A"<<endl;
		}
		};
class clb{
		public:
		void show_clb(){
		cout<<"this is class B"<<endl;
		}
		};
class clc{
		public:
		void show_clc(){
		cout<<"this is  class C"<<endl;
		}
		};
class cld :public cla,public clb, public clc {
		public:
		void show_cld(){
		cout<<"this is child class"<<endl;
		}
		};		
void main(){
	cld obd;
	obd.show_cld();
		obd.show_cla();
		obd.show_clb();
			obd.show_clc();
	}