#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int L,swap =0;
        cin >> L;
        int train[1000];
        for(int i = 0; i < L; i++)
        {
            cin >> train[i];
        }
        for(int i = 0; i < L-1; i++)
        {
            for(int j = 0; j < L - 1 - i; j++)
            {
                if(train[j+1] < train[j])
                {
                    int temp = train[j];
                    train[j] = train[j + 1];
                    train[j + 1] = temp;
                    swap++;
                }
            }
           
        }
        cout << "Optimal train swapping takes " << swap << " swaps." << endl;
    }
}