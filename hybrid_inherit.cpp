//program for hybrid inheritance
// combination of multilevel and multiple
#include<iostream.h>
class cla{
	public:
	void show_cla(){
		cout<<"this is cla class"<<endl;}
};
class clb :  public cla{
	public:
	void show_clb(){
		cout<<"this is clb class"<<endl;}
};
class clc{
	public:
	void show_clc(){
		cout<<"this is clc class"<<endl;}
};
class cld: public clc,public clb{
	public:
	void show_cld(){
		cout<<"this is cld class"<<endl;}
};
int main(){
cld obcld;
obcld.show_cld();
obcld.show_clb();
obcld.show_clc();
obcld.show_cla();

}