#include<iostream>
using namespace std;
void display(int num){
    if(num == 0){
        return;
    }
    else{
        display(num-1);
        cout<<num<<" ";
    }
}
int main(){
    display(5);
}