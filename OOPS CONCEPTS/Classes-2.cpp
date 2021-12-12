#include<iostream>
using namespace std;

class Shop{
	int Item_Id[10];
	int Price[10];
	int counter;
	
public:
	void intitCounter(void){
		counter = 0;
	}
	void setPrice(void);
	void displayPrice(void);
	

};

void Shop:: setPrice(void){
	cout<<"Enter the Id of item : ";
	cin>>Item_Id[counter];
	cout<<"Enter the Price of item : ";
	cin>>Price[counter];
	counter++;
}

void Shop::displayPrice(void){
	for(int i=0;i<counter;i++){
		cout<<"The Price of item_Id["<<Item_Id[i]<<"] is : "<<Price[i]<<endl;
	}
}

int main(){
	Shop goods;
	goods.intitCounter();
	goods.setPrice();
	goods.setPrice();
	goods.setPrice();
	

	goods.displayPrice();
	return 0;
}

