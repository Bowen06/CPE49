#include <iostream>
using namespace std;

int is_gcd(int s1, int s2)
{
    if(s2 == 0) return s1;
    else return is_gcd(s2 , s1 % s2);
}
int to_dig(string s)
{
    int dig=0;
    for(int i = 0; i < s.size(); i++)
    {
        dig = dig * 2 + (s[i] - '0');
    }
    return dig;
}

int main()
{
    int n;
    while(cin >> n)
    {
        string s1, s2;
        int p = 1;
        while(cin >> s1 >> s2)
        {   
            int i = to_dig(s1);
            int j = to_dig(s2);
            int a = is_gcd(i, j);
            if(a > 1)
            {
                cout << "Pair #" << p <<": All you need is love!" << endl;
            }
            else
            {
                cout << "Pair #" << p <<": Love is not all you need!" << endl;
            }
            p++;
        }
    }
    return 0;
}