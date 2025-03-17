#include<iostream>
using namespace std;
int main(){
    int l=0;
    for(int i = 4; i>0; i--){
        for(int j = 1; j<=i; j++){
            cout<<i;
        }
        l = l+1;
        cout<<"\n";
        for(int k=l;k>0;k--){
            cout<<" ";
        }
    }
    return 0;
}