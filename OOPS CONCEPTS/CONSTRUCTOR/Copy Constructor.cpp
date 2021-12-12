#include<iostream>
#include<string.h>
using namespace std;

class Emp{
	string name;
   int bno ; // Batch No.
   
   public:
   	Emp(){
   		// MUST CREATE A DEFAULT EMPTY CONSTRUCTOR IN CASE CREATING DYNAMIC CONSTRUCTOR OR WHEN PASSING ARGUMENTS TO SOME OBJECTS ONLY
		}
   	Emp(string a , int n){
   		name = a;
   		bno = n;
		}
		//COPY CONSTRUCTOR//
//		Emp(Emp &o1){        // even in the absence of this copy constructor ,compiler will call its own copy constructor.
//			name= o1.name;
//			bno = o1.bno;
//		}
		
		void display(){
			cout<<endl<<" NAME: "<<name<<endl<<" BATCH NO. : "<<bno<<endl;
		}
};
int main(){
//Enter Your Code here.

Emp x,y("billo", 121),z, s;
x.display(); 
y.display();
z = Emp("sweet", 552);
z.display();

// calling cpy const
// It will be called even the copy constructor is not initialised...
cout<<endl<<" Called by Copy Constructor:";
Emp p(y);
p.display();

/// Some more tricks to call the coppy constructor
 s=z;
 s.display(); // it has to give errors
 
// if it has written like this then no errors
Emp t = z;
t.display();


return 0;
}

