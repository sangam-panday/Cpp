#include<iostream>
#include<vector>
using namespace std;
int main(){
    // cout<<"This is the vector example..."

    //Different ways of vector decleration
    // vector<int> vec{1, 2, 3};
    // vector<char> vec = {'a', 'b', 'c'};

    //Printing different values of the vector
    // cout<<vec[0]<<"\n";
    // cout<<vec[1]<<"\n";
    // cout<<vec[2]<<"\n";

    vector<char> vec = {'a', 'b', 'c', 'd'};//decleration of the vector

    cout<<"Size = "<<vec.size()<<endl;//returns the size of the vector.

    vec.push_back('d');//adds value to the last of the vector.
    cout<<"Size after push back= "<<vec.size()<<endl;//Size after adding additional alphabet

    vec.pop_back();//delete the last element of the vector.
    cout<<"Size after pop back= "<<vec.size()<<endl;//Size after deleting last alphabet

    cout<<vec.front()<<endl;//prints the first element of the vector.
    cout<<vec.back()<<endl;//prints the last element of the vector.
    cout<<vec.at(0)<<endl;//prints the element of certain index.

    cout<<"The capacity that the vector vec can hold is: "<<vec.capacity()<<endl;//prints the capacity that the vector can hold.

    for(char i : vec){//for each loop 
        cout<<i<<endl;
    }
    return 0;
}