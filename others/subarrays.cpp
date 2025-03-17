#include<iostream>
using namespace std;
int main(){
    int n=5;
    int arr[5] = {1, 2, 3, 4, 5};//Decleration of a array

    //Printing subarray.
    cout<<"The sub array is: "<<endl;
    for(int st = 0; st < n; st++){
        for(int end = st; end < n; end++){
            for(int i = st; i <= end; i++){
                cout<<arr[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }

    //Maximum Subarray Sum(Brute Force..)
    int number =  5;
    int array[5] = {1, 2, 3, 4, 5};
    int max_sum  = INT16_MIN;
    for(int start = 0; start < number; start++){
        int current_sum  = 0;
        for(int end = start; end < number; end++){
            current_sum += array[end];
            max_sum = max(current_sum, max_sum);
        }
    }
    cout<<"Maximum sum of the sub array is: "<<max_sum<<endl;

    //Using kadane's algorithm
    
}
