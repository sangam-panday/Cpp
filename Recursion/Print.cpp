#include<iostream>
using namespace std;
int display(int num){
    if(num < 1){
        return 1;
    }
    else{
        cout<<num<<endl;
        return display(num-1);
    }
}
int main(){
    display(5);
}