#include <iostream>
using namespace std;

int n(int n)
{
	int cycle = 1;
	while(n != 1)
	{
		if(n % 2 == 1)
		{
			n = 3 * n + 1;
		}
		else
		{
			n /= 2;
		}
		cycle++;
	}
	return cycle;
}


int main()
{
	int i, j, max, temp;
	while(cin >> i >> j)
	{	
		max = 0;
		cout << i << " " << j << " ";
		if(i > j) 
		{
			temp = i;
			i = j;
			j = temp;
		}
		for(int k = i; k <= j; k++)
		{
			if(n(k) > max) max = n(k);
		}
		cout << max;
		cout << endl;
	}
	return 0;
}