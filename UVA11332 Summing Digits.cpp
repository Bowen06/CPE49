#include <iostream>
using namespace std;

int summing_dig(string n)
{
    int dig, sum = 0;
    for(int i = 0; i < n.size(); i++)
    {
        dig = n[i] - '0';
        sum += dig;
    }
    if(sum/10 == 0) return sum;
    else return summing_dig(to_string(sum));
}

int main()
{
    string n;

    while(cin >> n && n != "0")
    {
        int sum = summing_dig(n);
        cout << sum << endl;
    }
    
    return 0;
}