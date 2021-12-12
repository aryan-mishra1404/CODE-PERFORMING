#include<iostream>
using namespace std;

class Complex{
	
	int x,y;

	public:	
	Complex(){
	}
//	Complex(): x(3), y(5){}
	Complex(int , int);
//		
		void display(){
//			cout<<" X : "<<x<<endl<<" Y : "<<y<<endl;
			cout<<" Complex No. is : ( "<<x<<" + "<<y<<"i )"<<endl;

		}
};

Complex:: Complex(int a, int b){
	x=a;
	y=b;
}
//Parameterized Constructor
int main(){
//Enter Your Code here.
Complex o1 = Complex(2, 7);
o1.display();

Complex o2;
o2.display();

return 0;
}

