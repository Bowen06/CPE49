#include <iostream>
using namespace std;

int main()
{
    int t,c=1;
    cin >> t;
    while(t--)
    {
        int a, b,sum = 0;
        cin >> a >> b;
        for(int i = a; i <= b; i++)
        {
            if(i%2==1)
            {
                sum += i;
            }
        }
        cout << "Case " << c << ": " << sum << endl;
        c++;
    }
}