#include<iostream>
using namespace std;

class Num{
	float a,b;
	friend float mean(Num );
public:
	float c;
	
	Num() : a (2) , b (4){} // DEFAULT CONSTRUCTOR CA BE DEFINED LIKE THIS
//	Num(): cin>>a>>b {}   // gives error..
//	Num(){
//		cout<<"Enter the two values, A and B :"<<endl;
//		cin>>a>>b;
//	}
	void display();
};

void Num::display(){
	cout<<"Displaying Details : "<<endl;
	cout<<"A: "<<a<<endl<<"B: "<<b<<endl;
	
}

float mean(Num obj){
	float avg;
	avg= (obj.a + obj.b)/2;
	return avg;
}
int main(){
//Enter Your Code here.
Num o1; // HOW TO LIMIT THE DEFAULT CONSTRUCTOR TO A PARTICULAR/ SPECIFIC OBJECT
o1.display();

o1.c = mean(o1);

cout<<"The Average Value of A and B is: "<<o1.c<<endl;



return 0;
}

