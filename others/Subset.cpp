#include<iostream>
using namespace std;
void subset(string s,string curr, int n){
	if(n == s.length()){
		cout<<curr<<endl;
		return;
	}
	subset(s, curr + s[n], n+1);
	subset(s, curr, n+1);
}
int main(){
	string name ="abc";
	subset(name, "", 0);
}
