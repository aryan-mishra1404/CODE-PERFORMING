#include<iostream>
using namespace std;
#include<math.h>

class Coordinates{
	int x,y;
	friend float Distance(Coordinates , Coordinates);
	public:
		Coordinates(int , int );
		
		void display(){
			cout<<" X : "<<x<<"\t Y : "<<y<<endl;
		}
		
		
};

float Distance(Coordinates o1 , Coordinates o2){
	
	float dis;
	dis = sqrt( pow((o2.y- o1.y), 2 ) + pow((o2.x- o1.x), 2 ) ) ;
	return dis;
	
}

Coordinates:: Coordinates(int a, int b){
	x= a;
	y=b;
}

int main(){
//Enter Your Code here.
Coordinates s1(1 , 1);
s1.display();
Coordinates s2(2 , 2);
s2.display();

cout<<"The Distance B/w the Two Points on plane is: "<<Distance(s1,s2)<<endl;
return 0;
}

