#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<string> lines;
	string s;
	int max_length = 0;
	while(getline(cin, s)) {
		lines.push_back(s);
		if(s.length() >  max_length) max_length = s.length();
	}
	
	for(int col = 0; col < max_length; col++) {
		for(int row = lines.size() -1; row >= 0; row --) {
			if (col < lines[row].length()) {
                cout << lines[row][col];
            } else {
                cout << ' ';
            }
		}
		cout << '\n';
	}
	
	return 0;
}