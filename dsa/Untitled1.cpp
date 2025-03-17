#include<iostream>
#include<fstream>
using namespace std;
class Program{
	string item_name;
	int batch_no;
	int exp_time;
	int quantity;
	public:
		void display(){
			cout<<"Name: "<<item_name;
			cout<<"Batch no: "<<batch_no;
			cout<<"Days remaining: "<<exp_time;
			cout<<"Quantity: "<<Quantity;
		}
		void input(){
			cout<<"Enter the name of the Product: ";
			cin>>item_name;
			cout<<"Enter batch no of the Product: ";
			cin>>batch_no;
			cout<<"Enter the days remaining of the Product: ";
			cin>>exp_time;
			cout<<"Enter the quantity of the product: ";
			cin>>quantity;
		}
};
int main(){
	Program p();
	p.input();
	p.display();
}
