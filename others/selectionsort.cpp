//Sorting usign selection sort
#include<iostream>
using namespace std;
int main(){
    int n = 5;//no of numbers in a array
    int myArray[5] = {0 , 1, 5, 6 ,4};//Decleration of array
    for(int i = 0; i < n; i++){//running loop from ith index
        int min_index = i;//asuming min value to be in the ith index
        for(int j = i + 1; j<n; j++){//running loop from i+1th index
            if (myArray[j] < myArray[min_index]){//checking for minimum value
                min_index = j;
            }
        }
        //Moving the values.
        int temp = myArray[min_index];
        myArray[min_index] = myArray[i];
        myArray[i] = temp;
    }
    //Printing the updated result
    for(int i = 0; i<n; i++){
        cout<<myArray[i]<<endl;
    }
}