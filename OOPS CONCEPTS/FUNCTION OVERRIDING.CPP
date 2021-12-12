#include<iostream>
using namespace std;
// FUNCTION OVERRIDDING//
class Base{
	int a,b;
	public:
//		Constructor for Base class
		Base(): a(11),b(61){}
		
//		void printed(){
//			cout<<"a: "<<a<<endl<<"b: "<<b<<endl<<endl;
//		}
		virtual void print(){
			cout<<"a: "<<a<<endl<<"b: "<<b<<endl<<endl;

		}
};

class Derived:public Base{
	int x,y;
	public:
		Derived(int p ,int q): x(p),y(q){}// Defining Constructor;
		void print(){
			cout<<"x: "<<x<<endl<<"y: "<<y<<endl<<endl;
			//	2)second method to print the function of Base class..
//			Base::print();

		}
};
int main(){
//Enter Your Code here.
Derived obj(22, 102);
//obj.printed(); // IT WILL AUTOMATICALLY CALL OUT THE CONSTRUCTOR FOR bASE CLASS.//

// SINCE BOTH THE CLASSES HAS SAME NAME OF FUNCTIONS WITH SAME ARGUMENTS..
obj.print();// in this case base class will be overridden by derived class--> print derived class function.

//NOW INORDER TO PRINT BASE CLASS FUNCTION / >>to prevent Function Overridding<< THERE ARE 3 WAYS:

//1) we can declare that function using "scope resolution operator"(SRO):
	obj.Base::print();
	
//2) we can directly declare the func.using SRO in the derived class function :^:

//3)  WE can define an object pointer of Base class, Storing Address of of Obcect of derived class
Base *ptr;
ptr=&obj;
ptr->print();
return 0;
}
//PROGRAMIZ VIRTUAL FUNCTION --> LAst example???s

// in order to let function overriding//
//we use virtual function._.->> FOR THAT WE MAKE THE BASE CLASS FUNTION AS VIRTUAL..==>  virtual void print(){}
//(.!.) VIRTUAL FUNCTION MAINLY WORKS ON 3 TYPE OF PREVENTION TO OVERRIDDING (._.)//
