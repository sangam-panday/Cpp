#include<iostream>
using namespace std;
bool ispalindrome(int x){
	int reverse = 0, org = x;
	while(x > 0){
		reverse = reverse*10 + x%10;
		x/=10;
	}
	return (reverse==org);
}
int main(){
	cout<<ispalindrome(101)<<endl;
	cout<<ispalindrome(121)<<endl;
	cout<<ispalindrome(123)<<endl;
	cout<<ispalindrome(145)<<endl;
}
