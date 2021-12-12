#include<iostream>
using namespace std;
// MULTIPLE INHERITENCE//

class Student{
	
	protected:
		string name;
		string Id;
	
	public:
	Student(){
		name = "Aryan";
		Id = "B200339";
	}

};

class Marks: public Student{
	
	protected:
		float Sub1;
		float Sub2;
		
	public:
		
//		Marks(float , float);

		Marks(): Sub1(88.67) , Sub2(95.75){}//declaring constructor//

		void print_marks();
	
		
};



//Marks::Marks(float a, float b){ /// Defining Constructor outside the class..
//			Sub1= a;
//			Sub2 = b;
//			
//		}
		
void Marks::print_marks(){
			cout<<"\tSubject-1 marks: "<<Sub1<<endl;
				cout<<"\tSubject-2 marks: "<<Sub2<<endl;
	
		}
		
class Results: public Marks{
	float percentage;
	
	public:
		Results(){
//			Student::Student();
			percentage = (Sub1 + Sub2)/ 2;
		}
		
		void display_result();
	
};

void Results::display_result(){
	cout<<" Student Name: "<<name<<endl;
	cout<<" Student ID: "<<Id<<endl;
	
	print_marks();
	
	cout<<" \t\t!!Percentage Scored: "<<percentage<<"%"<<endl;
}

int main(){
//Enter Your Code here.
//Student o1;
//Marks o2;
Results obj;

//obj.Student::Student();

//obj.Student();  //HOW TO USE A BASE CLASS CONSTRUCTOR USING DERIVED CLASS
obj.display_result();


return 0;
}

