#include <iostream>
#include <map>
using namespace std;

int main()
{
	int n;
	cin >> n;
	map<string, int> country;
	while(n--)
	{
		string a, b, c;
		cin >> a >> b >> c;
		country[a]++;
	}	
	for(const auto& pair: country)
		cout << pair.first << " " <<pair.second << endl;
    
    return 0;
}