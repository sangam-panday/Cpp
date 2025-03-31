#include<iostream>
using namespace std;
void sum(int arr[], int target, int size, int result[]){
	for(int i = 0; i<size; i++){
		if(arr[i]+arr[(i+1)%size]==target){
			result[0] = arr[i];
			result[1] = arr[(i+1)%size];
		}
	}
}
int main(){
	int arr[] = {0, 1, 2, 4};
	int target = 4;
	int size = sizeof(arr)/sizeof(arr[0]);
	int result[2];
	sum(arr, target, size, result);
	cout<<result[0]<<" "<<result[1];
}
