//Sorting using bubble sort
#include<iostream>
using namespace std;
int main(){
    int n = 5;
    int array[n] = {5, 6, 4 ,7 ,2};//Decleration of array
    for(int i = 0; i < n; i++){
        for(int j = 0; j< n-i-1; j++){
            if(array[j]>array[j+1]){//checking the adjacent values
                //Bubbling the values.
                int temp = array[j+1];
                array[j+1] = array[j];
                array[j] = temp;
            }
        }
    }
    for(int i = 0; i < n; i++){//looping through updated array
        cout<<array[i]<<endl;//printing the value of array
    }
}