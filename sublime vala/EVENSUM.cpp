#include<bits/stdc++.h>
using namespace std ;
int main()
{
	 ios_base::sync_with_stdio(false);
	 cin.tie(NULL);
	int t ;
	cin >> t ;
	while (t--)
	{
		long long  n ;
		cin >> n ;
        long tem =0 , odd =0 ,even =0 ;
        for (int i =0 ; i<n ; i++)
        {
        	cin >> tem;
        	if (tem%2==0)
        		even++;
        	else odd++;
        	
        }
        if (odd%2 ==1 )
        	{
        		cout << "2"<<endl;

        	}
        	else 
        		cout << "1"<<endl;

	}
}