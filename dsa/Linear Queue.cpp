#include<iostream>
using namespace std;
#define MAX 5
int front = -1, rear = -1;
int arr[MAX];
void enqueue(){
	if(front == -1 && rear == -1){
		front = 0;
	}
	else if(rear == (MAX-1)){
		cout<<"The queue is full. \n";
	}
	else{
		int num;
		cout<<"Enter any number to be entered in the queue: ";
		cin>>num;
		rear+= 1;
		arr[rear] = num;		
	}

}
void dequeue(){
	if(rear == -1){
		cout<<"The queue is empty. \n";
	}
	else if(front == rear){
		front = rear = -1;
	}
	else{
		cout<<"The dequeued number is: "<<arr[front]<<"\n";
		front += 1;
	}
}
void display(){
	if(rear == -1){
		cout<<"The queue is empty. \n";
	}
	else{
		cout<<"The items in the queue:\n";
		for(int i =front; i<= rear; i++)
		{
			cout<<arr[i]<<" ";
		}	
		cout<<"\n";
	}
}
int main(){
	int choice;
	cout<<"----------------QUEUE----------------\n";
	cout<<"Enter one of the following options: \n";
	while(1){
		cout<<"1.Enqueue \n";
		cout<<"2.Dequeue\n";
		cout<<"3.Display \n";
		cout<<"4.Exit \n";
		cin>>choice;
		if(choice == 1){
			enqueue();
		}
		else if(choice == 2){
			dequeue();
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
