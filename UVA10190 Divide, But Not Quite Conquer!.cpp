#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    while(cin >> n >> m)
    {

        if(n < 2 || n <= 1 || m > n )
        {
            cout << "Boring!" << endl;
            continue;
        }

        vector<long long> sequence;
        bool is_boring = false;
        while(n > 1)
        {
            sequence.push_back(n);

            if(n % m != 0)
            {
                is_boring = true;
                break;
            }

            n /= m;
        }
        sequence.push_back(1);

        if(is_boring)
        {
            cout << "Boring!" << endl;
        }
         else
         {
            
            for (int i = 0; i < sequence.size(); i++)
            {
                cout << sequence[i];
                if (i < sequence.size() - 1) 
                {
                    cout << " ";
                }
            }
            cout << "\n";
        }
    }

    return 0;
}