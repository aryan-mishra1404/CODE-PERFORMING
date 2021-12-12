#include<iostream>
using namespace std;
class B;

class A{
	int x;
	//MAKING class B AS FRIEND OF A
	friend class B;
	//CONSTRUCTOR DELCLARATION
	A(): x(5) {}
public:
	void display(){
		cout<<" The value of X from Class A is: "<<x<<endl;
	}
};

class B{
	int y;
	// declaring object of class A in class B because of friend classes( i.e each meber of class A is a friend of B and ca be access without inheritence.. ^_^ // 
	A obj1;
	
public:
	int add;
	//assigning value to y using constructor
	B(): y(11) {}
	
	int Sum(){
//		A obj1; // this object of classs A is created only for this function.
		
		
		return(obj1.x + y );
		
	}
	
	void display(){
//		A obj1;// i think that the constructor for this cobject is initialised once again hnce increasing complexity.
		obj1.display();
		cout<<" The value of Y from Class B is: "<<y<<endl;
		cout<<" The sum of X & Y is: "<<add<<endl;
	}
};
int main(){
//Enter Your Code here.
B obj;
obj.add = obj.Sum();

cout<<"Displaying Details : "<<endl;
obj.display();
return 0;
}

