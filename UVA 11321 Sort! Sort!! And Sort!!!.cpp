#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int N, M;

bool cmp(int a, int b)
{
    int mod_a = a%M;
    int mod_b = b%M;

    if(mod_a != mod_b)
    {
        return mod_a < mod_b;
    }

    bool isOdd_a = (a % 2 != 0);
    bool isOdd_b = (b % 2 != 0);

    if(isOdd_a != isOdd_b)
    {
        return isOdd_a > isOdd_b;
    }

    if(isOdd_a && isOdd_b)
    {
        return a > b;
    }

    return a < b;
}

int main()
{
    
    while(cin >> N >> M)
    {
        cout << N << " " << M << endl;
        if((N|M) == 0) break;

        vector<int> nums(N);
        for(int i=0; i < N; i++)
        {
            cin >> nums[i];
        }
        sort(nums.begin(), nums.end(), cmp);
        
        for (int i = 0; i < N; i++) 
        {
            cout << nums[i] << endl;
        }
    }

    return 0;
}