#include<iostream>
using namespace std;
int main(){
    //top part
    int n=4;//controls the size of the output
    int i=0;
    while(i<n){
        int j = n-i;
        while(j>0){
            cout<<" ";
            j--;
        }
        cout<<"*";
        //for spaces in between
        if(i!=0){
            for(int k=1;k<=(i*2)-1;k++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<"\n";
        i++;
    }
    //bottom part
    for(int i=0;i<n-1;i++){
        for(int j=0;j<i+2;j++){
            cout<<" ";
        }
        cout<<"*";
        //spaces for the bottom part
        if(i!=n-2){
            for(int k=0;k<2*(n-i)-5;k++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}