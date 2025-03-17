#include<iostream>
using namespace std;
int main(){
    int n=4;
    int i=n;
    while(i>0){
        int j=4-(4-i);
        while(j<=n){
            cout<<"*";
            j++;
        }
        int l = i-2;
        while(l<=n){
            int k=i-l;
            while(k>=0){
                cout<<" ";
                k--;
            }
        l++;
        }
        cout<<"\n";
        i--;
    }
}