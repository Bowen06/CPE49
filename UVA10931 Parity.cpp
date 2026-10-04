#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i;
    while(cin >> i && i != 0)
    {
        int p = 0;
        string b;
        while(i > 0)
        {
            int c = i % 2;
            i /= 2;
            if(c) p += 1;
            b = to_string(c) + b;
        }
        cout << "The parity of " << b << " is " << p << " (mod 2)." << endl;
    }

    return 0;
}