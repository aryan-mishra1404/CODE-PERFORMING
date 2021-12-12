#include<iostream>
using namespace std;

//............................. WAP TO SWAP THE VALUES OF PRIVATE MEMBERS OF TWO CLASSES........................//

//FORWARD DECLARATION 
class B; 

// CREATTING CLASS A
class A{
	int data;
public:
  	A(){
  		cout<<"\t\t\t The Value will Set Automatically By The constructor of 'class A':"<<endl<<endl;
  	
      cout<<"Enter the data : "<<endl;
  		cin>>data;
  		
	  }
	  
	friend void swap(A &, B &);
	void display(){
		
	   cout<<endl<<"Displaying the details of Class A:"<<endl;
		cout<<data<<endl;
	}
};

//void A::display(){
//	cout<<"Displaying the details:"<<endl;
//	cout<<data;
//}

// CREATING  CLASS B
class B{
	int val;
public:
  	B(){
  		cout<<"\t\t\t The Value will Set Automatically By The constructor of 'class B':"<<endl<<endl;
  		cout<<"Enter the data : "<<endl;
  		cin>>val;
  		
	  }
	  
	friend void swap(A &, B &);
	
	void display(){
	cout<<endl<<"Displaying the details of class B :"<<endl;
	cout<<val<<endl;
	}
};


// DIFINING FRIEND FUCTION//
	/*
void swap(A o1, B o2){
	
	int temp = o1.data;
	o1.data = o2.val;
	o2.val  =  temp;

	// SINCE ITS CALL BY VALUE HENCE THE CHANGE WILL BE OBSERVABLE IN THE FUNCTION ITSELF NOT I THE ORIGINAL VALUES//
//	cout<<" After Swapping:"<<endl;
//	cout<<o1.data<<endl;
//	cout<<o2.val<<endl;
}
*/

void swap(A &o1, B &o2){
	int temp = o1.data;
	o1.data = o2.val;
	o2.val  =  temp;
}


int main(){
//Enter Your Code here.
A obj1;
obj1.display();

B obj2;
obj2.display();


/*
// SINCE ARGUMENTS ARE PASSED BY CALL BY VALUES HENCE NO CHANGE WILL OCCUR AT ORIGINAL DATA
swap(obj1,obj2);
cout<<" After Swapping:"<<endl;
obj1.display();
obj2.display();
*/
swap(obj1, obj2);
cout<<" After Swapping:"<<endl;
obj1.display();
obj2.display();
return 0;
}

