#include <iostream>
using namespace std;

int main()
{
	char ch;
	bool is_first = true;
	while(cin.get(ch))
	{
		if(ch == '"')
		{
			 if (is_first) {
                cout << "``";  
            } else {
                cout << "''"; 
            }
            is_first = !is_first;
		}
		else
		{
			cout << ch;
		}
	}
	
	return 0;
}