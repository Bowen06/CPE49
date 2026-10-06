#include <iostream>
using namespace std;

int GCD(int i, int j)
{
	if(j==0) return i;
	else return GCD(j, i % j);
}
int main()
{
	   ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
	int N;
	while(cin >> N && N != 0)
	{		
		int i, j, G = 0;
		for(i=1; i < N; i++)
		{
			for(j=i+1;j<=N;j++)
			{
	     	 	G+=GCD(i,j);
	    	}
		}
		
	    cout << G << endl;
	}
	
	return 0;
}