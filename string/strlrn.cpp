#include<iostream>
using namespace std;
int main()
{
    char string[100];
    int place, length; 
    cout<<"Enter a string: ";
    cin.getline(string,100);
    cout<<"Enter the Place to extract the string: ";
    cin>>place;
    cout<<"Enter the lenqgth of the string: ";
    cin>>length;
    char extract[100];
    for(int i = 0; i < length; i++)
    {
        extract[i]=string[place-1+i];
    }
    cout<<"The extracted string is: "<<extract;
}