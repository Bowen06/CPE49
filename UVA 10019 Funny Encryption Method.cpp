#include <iostream>
using namespace std;

int count_1(int i)
{
    int count = 0;
    while(i > 0)
    {   
        if(i % 2)
        {
            count++;
        }
        i /= 2;
    }
    return count;
}

int bin(int i)
{
    return count_1(i);
}

int hex(int i)
{
    int a = 0;
    while(i > 0)
    {
        int dig = i % 10;
        a += bin(dig);
        i /= 10;
    }
    return a;
}

int main()
{
    int N;
    cin >> N;
    while(N--)
    {
        int m;
        cin >> m;
        cout << count_1(m) << " " << hex(m) << endl;
    }

    return 0;
}