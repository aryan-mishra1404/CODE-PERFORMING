#include<iostream>
#include<string.h>
using namespace std;

class Emp{
	string Name;
	string Id;
	string Field;
	
	friend Emp traitor(Emp cheat);
	
public:
	Emp(){
		cout<<"Taking INputs through constructor automatically"<<endl;
		cout<<"Enter Name; Id; and Field"<<endl;
		cin>>Name>>Id>>Field;
	}
	void dislplay();
	
	
};

Emp traitor(Emp cheat){
	cout<<"Being a Cheater lets change the Information"<<endl<<" Change Id; Change Field"<<endl;
	cin>>cheat.Id>>cheat.Field;
	return cheat;
}

void Emp::dislplay(){
	cout<<endl<<"Displaying Details: "<<endl;
	cout<<"Name : "<<Name<<endl<<"Id : "<<Id<<endl<<"Field : "<<Field<<endl;
}
int main(){
//Enter Your Code here.
Emp fault;// i could use another object obj but for that i had to remove the constructor and make an input fuction
fault.dislplay();
fault=traitor(fault);
fault.dislplay();
return 0;
}

