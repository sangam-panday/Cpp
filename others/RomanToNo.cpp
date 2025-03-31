//Roman to integer
/*
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
*/
#include<iostream>
using namespace std;
int convert(string s){
	int num = 0;
	int size = s.length();
	int sort[size];
	for(int i = 0; i < size; i++){
		if(s[i]=='I'){
			sort[i] = 1;
		}
		else if(s[i]=='V'){
			sort[i] = 5;
		}
		else if(s[i]=='X'){
			sort[i] = 10;
		}
		else if(s[i]=='L'){
			sort[i] = 50;
		}
		else if(s[i]=='D'){
			sort[i] = 500;
		}
		else if(s[i]=='M'){
			sort[i] = 1000;
		}
		else if(s[i]=='C'){
			sort[i] = 100;
		}
		if (i > 0 && sort[i] > sort[i - 1]) {
            num += sort[i] - 2 * sort[i - 1];
        } else {
            num += sort[i];
        }
	}
	return num;
}
int main(){
	cout<<"Integer of XIV is: "<<convert("XIV");
}
