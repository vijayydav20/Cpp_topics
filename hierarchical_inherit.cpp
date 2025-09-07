//  program for hierarchical inheritance
#include<iostream.h>
class cla{
		public:
		void show_cla(){
		cout<<"this is base  class cla"<<endl;
		}
		};
class clb : public cla{
		public:
		void show_clb(){
		cout<<"this is child class clb"<<endl;
		}
		};
class clc : public cla{
		public:
		void show_clc(){
		cout<<"this is child  class clc"<<endl;
		}
		};		
void main(){
	clb obb;
	obb.show_cla();
		obb.show_clb();
	clc obc;
	obc.show_cla();
		obc.show_clc();	
	}