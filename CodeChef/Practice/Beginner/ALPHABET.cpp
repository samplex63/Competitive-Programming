#include<bits/stdc++.h>
using namespace std;

int main() {
	string dict;
	int n;
	cin >> dict;
	cin >> n;
	while(n--) {
	    int count = 0;
	    string word;
	    cin >> word;
	    for(int i = 0; i < word.length(); i++) {
	        for(int j = 0; j < dict.length(); j++) {
	            if(word[i] == dict[j]) {
	                count++;
	                break;
	            }
	        }
	    }
	    (count == word.length())? cout << "Yes\n": cout << "No\n";
	}
	return 0;
}