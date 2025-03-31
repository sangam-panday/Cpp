#include<iostream>
using namespace std;
bool isvalid(string s){
	int size = s.length();
	for(int i = 0; i < size; i++)
	{
		for(int j = i+1; j < size; j++){
			if(s[i] == '{' && s[j] == '}'){
				s[i] = ' ';
				s[j] = ' ';
			}
			else if(s[i] == '(' && s[j] == ')'){
				s[i] = ' ';
				s[j] = ' ';
			}
			else if(s[i] == '[' && s[j] == ']'){
				s[i] = ' ';
				s[j] = ' ';
			}
		}
	}
	for(int i = 0; i<size; i++){
		if(s[i] != ' '){
			return false;
		}
	}
	return true;
}
int main(){
	cout<<isvalid("{}{[]}")<<endl;
	cout<<isvalid("{}{[]}]")<<endl;
}
