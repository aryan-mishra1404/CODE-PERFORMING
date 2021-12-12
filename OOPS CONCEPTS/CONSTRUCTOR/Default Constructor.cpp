#include<iostream>
using namespace std;

class Cons{
	
	int x,y;

	public:	
	Cons(): x(3), y(6){}
	Cons(void){
	}
//		Cons(void);           // The Default Constructor will get initialised automatically and store Garbage Values 
		
		void display(){
			cout<<" X : "<<x<<endl<<" Y : "<<y<<endl;
		}
};

//Cons:: Cons(void){
//	x=2;
//	y=11;
//}


int main(){
//Enter Your Code here.
Cons o1;
o1.display();
Cons o2;
o2.display();


return 0;
}

