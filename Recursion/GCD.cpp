#include<iostream>
using namespace std;
int gcd(int a, int b){
	if(a%b == 0){
		return b;
	}
	return gcd(b, a%b);
}
int main(){
	int g = gcd(15, 30);
	cout<<g;
}
