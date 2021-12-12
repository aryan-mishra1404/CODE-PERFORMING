#include<iostream>
using namespace std;

class Base{
	
   int data1;
	
	public:
		int data2;
		
		void setdata(){
			
			data1= 10;
			data2 = 21;
		}
		
		int showdata1(){
			return data1;
		}
		 
		int showdata2(){
			return data2;
	}		
};

class Derived: public Base
{	int data3;
	public:
//		Derived(): data3(51){}// default constructor;
		
//	void Derive(){
////			data3= (data2)* showdata1();
//			data3 = data2;
//		}


	
		void process();
		void display();
	
		
		
};
void Derived::process(){
	data3 = data2;
}
void Derived::display(){
	cout<<"Data1: "<<showdata1()<<endl;
		cout<<"Data2: "<<data2<<endl;
			cout<<"Data3: "<<data3<<endl;

}

int main(){
//Enter Your Code here.
Derived o1;
o1.setdata();
o1.display();

return 0;
}

