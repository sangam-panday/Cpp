#include<iostream>
using namespace std;

string prefix(string s[], int size) {
    if (size == 0) return "";  

    string result = s[0]; 

    for (int i = 1; i < size; i++) {
        int j = 0;
        while (j < result.length() && j < s[i].length() && result[j] == s[i][j]) {
            j++;
        }
        result = result.substr(0, j); 

        if (result.empty()) return ""; 
    }

    return result;
}

int main() {
    string strs[] = {"flower", "flow", "flight"};
    int size = sizeof(strs) / sizeof(strs[0]); 

    cout << "Longest common prefix: " << prefix(strs, size) << endl;
}

