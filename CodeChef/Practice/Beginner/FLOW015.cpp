#include<bits/stdc++.h>
using namespace std;

bool leapYear(int y) {
	bool isLeapYear = false;
	if (y % 4 == 0) {
		if (y % 100 == 0) {
			if (y % 400 == 0) {
				isLeapYear = true;
	    	}
	  	} 
	  	else isLeapYear = true;
	}
	return isLeapYear;
}

int main() {
	unsigned int t, year;

	cin >> t;
	while(t--) {
		cin >> year;
		int ans = 1;
		for(int i = 1900; i < year; ++i) {
			ans++;
			if(ans == 8)
				ans = 1;
			if(leapYear(i)) {
				ans++;
				if(ans == 8)
					ans = 1;
			}
		}
		switch(ans) {
			case 1: cout << "monday\n";
				break;
			case 2: cout << "tuesday\n";
				break;
			case 3: cout << "wednesday\n";
				break;
			case 4: cout << "thursday\n";
				break;
			case 5: cout << "friday\n";
				break;
			case 6: cout << "saturday\n";
				break;
			case 7: cout << "sunday\n";
				break;
		}
	}
	return 0;
}