#include <iostream>
using namespace std;

int main()
{
    int n_case;
    
    while(cin >> n_case && n_case != 0)
    {
        int t = 1, n = 2, w = 3;
        int temp = 0;
        while(n_case--)
        {
            string str;
            cin >> str;
                
            if (str == "north") {
                temp = t;
                t = 7 - n; n = temp;
            } 
            else if (str == "south") {
                temp = t;
                t = n; n = 7 - temp;
            } 
            else if (str == "east") {
                temp = t;
                t = w; w = 7 - temp;
            } 
            else if (str == "west") {
                temp = t;
                t = 7 - w; w = temp;
            }
        }
        cout << t << endl;

    }

    return 0;
}