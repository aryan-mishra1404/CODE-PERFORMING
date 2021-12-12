#include<iostream>
using namespace std;

//SUM OF COMPLEX NUMBERS 
//PRODUCT OF COMPLEX NUMBERS


class Complex{
	int a,b;
	
	friend Complex complex_sum(Complex o1,Complex o2);
	
	public:
		
		void setval(int num1,int num2);
		void displayval(void){
			cout<<"The Complex No. is "<<a<<" + "<<b<<"i"<<endl;
		}
		
		void display_sum(void){
			cout<<"The Sum of Complex No. is "<<a<<" + "<<b<<"i"<<endl;
		}
}n1;

void Complex::setval(int num1,int num2){
	
	a= num1;
	b= num2;
}
// USING  " complex_sum"  AS A FRIEND  FUNCTION.
Complex complex_sum(Complex o1,Complex o2) {
	
	Complex o3;
	o3.setval((o1.a + o2.a) , (o1.b + o2.b));
	return o3;
}


int main(){
//Enter Your Code here.
	Complex n2,sum;
	n1.setval(1, 4);
	n1.displayval();
	
	n2.setval(4, 7);
	n2.displayval();
	
	sum=complex_sum(n1,n2);
	
	sum.display_sum();
return 0;
}

