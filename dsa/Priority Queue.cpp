#include<iostream>
#define MAX 5
using namespace std;
int size = 0;
int arr[MAX], pri[MAX];
void enqueue(){
	if(size == (MAX -1)){
		cout<<"The queue is full. \n";
	}
	else{
		int num, pro;
		cout<<"Enter the number to be entered in the queue: ";
		cin>>num;
		cout<<"Enter the priority of the queue: ";
		cin>>pro;
		int i = size;
		arr[size] = num;
		pri[size] = pro;
		while(i>0&&pri[i]<pri[i-1]){
			swap(pri[i],  pri[i-1]);
			swap(arr[i], arr[i-1]);
			i--;
		}
		size += 1;
	}
}
void dequeue()
{
	if(size == 0){
		cout<<"The queue is empty.\n";
	}
	else
	{
		cout<<"The dequeued element is: "<<arr[0]<<endl;
		for(int i=0; i<size; i++){
			arr[i] = arr[i+1];
			pri[i] = pri[i+1];
		}	
		size -= 1;
	}
}
void display()
{
	cout<<"The elements in the queue: ";
	for(int i = 0; i<size; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
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
