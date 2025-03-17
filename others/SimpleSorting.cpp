//Simple sorting using simple algorithm.
#include<iostream>
using namespace std;
int main(){
    int a[] = {1, 2, 3, 4, 5};//array decleration
    int min = a[0];//making min variable and assigning first value of array
    for(int i = 0; i < 5; i++){//looping through array
        if(a[i]<min){//checking for the minimum value
            min = a[i];//updating the minimum value
        }
    }
    cout<<"The lowest value is: "<<min<<endl;//Outputting the value
}