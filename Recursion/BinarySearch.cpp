#include<iostream>
using namespace std;
int search(int arr[],int front, int last, int key){
	if(key == arr[front]){
		return front;
	}
	if(key == arr[last]){
		return last;
	}
	return search(arr, front+1, last-1, key);
}
int main(){
	int arr[] = {1, 2, 3, 4, 5};
	int key = 4;
	int size = sizeof(arr)/sizeof(arr[0]);
	int found = search(arr, 0, size-1, key);
	cout<<found;
}
