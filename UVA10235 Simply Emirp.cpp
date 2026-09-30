#include <iostream>
#include <cmath>
using namespace std;


bool is_prime(int n)
{
    if (n < 2) return false;
    if (n == 2) return true;      
    if (n % 2 == 0) return false; 
    
   
    int limit = sqrt(n);
    for (int i = 3; i <= limit; i += 2)
    {
        if (n % i == 0) return false; 
    }
    
    return true; 
}

int main()
{
    int n;
    while (cin >> n)
    {
        if (!is_prime(n))
        {
            cout << n << " is not prime.\n";
        }
        else
        {
            int temp = n;      
            int reverse_n = 0;  
            
            while (temp > 0)
            {
                int mod_n = temp % 10;
                reverse_n = reverse_n * 10 + mod_n; 
                temp /= 10;
            }
            
            if (reverse_n != n && is_prime(reverse_n))
            {
                cout << n << " is emirp.\n";
            }
            else
            {
                cout << n << " is prime.\n";
            }
        }
    }
    return 0;
}
