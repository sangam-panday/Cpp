#include<iostream>
using namespace std;
#define MAX 5
int top = -1;
int arr[MAX];
void push(){
	int x;
	if(top == (MAX-1)){
		cout<<"The stack is full. \n";
	}
	else{
		cout<<"Enter number to be pushed in the queue: ";
		cin>>x;
		top += 1;
		arr[top] = x;
	}
}
void display(){
	if(top == -1){
		cout<<"The stack is empty\n";
	}
	else{
		cout<<"The number's in the stack: ";
		for(int i=0; i<=top; i++){
			cout<<arr[i]<<"\t";
		}
		cout<<"\n";
	}
}
void pull(){
	if(top == -1){
		cout<<"The stack is empty\n";
	}
	else{
		cout<<"The pulled element: "<<arr[top];
		top -= 1;
	}
}
int main(){
	int choice;
	cout<<"----------------STACK----------------\n";
	cout<<"Enter one of the following options: \n";
	while(1){
		cout<<"1.Push \n";
		cout<<"2.Pull \n";
		cout<<"3.Display \n";
		cout<<"4.Exit \n";
		cin>>choice;
		if(choice == 1){
			push();
		}
		else if(choice == 2){
			pull();
		}
		else if(choice == 3){
			display();
		}
		else if(choice == 4){
			break;
		}
		else{
			cout<<"Please input one of the following chioce\n";
		}
	}	
}
