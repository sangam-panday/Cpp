#include<iostream>
using namespace std;
bool check(int arr[], int n){
	if(n <= 0){
		return true; 
	}
	if(arr[n]< arr[n-1]){
		return false;
	}
	return(arr, n-1);
}
int main(){
	int arr1[] = {1, 2, 3, 4, 5};
	int arr2[] = {2, 4, 1, 5, 3};
	cout<<check(arr1, sizeof(arr1) / sizeof(arr1[0]) - 1)<<endl;
	cout<<check(arr2, sizeof(arr2) / sizeof(arr2[0]) - 1);
}
