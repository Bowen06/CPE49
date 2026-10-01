#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b;
    while(cin >> a >> b && a != 0 && b!= 0)
    {
        int sqrt_count = 0;
        for(int i = a; i <= b; i++)
        {
            int num = sqrt(i);
            if((num*num) == i)
            {
                sqrt_count ++;
            }
        }
        cout << sqrt_count << endl;
    }
    return 0;
}