#include<bits/stdc++.h>
using namespace std ;
int main()
{
	int t ;
	cin >>t;
	while(t--)
	{
		float  u , v , a ,s ,m;
		cin >> u >> v >>a >>s;
		if (v==u)
		{
			cout << "YES" <<endl;

		}
		else 
			{ m = pow((v*v - 2*a*s),1.0/2.0);
				cout <<m;
				
				if (m<= v)
					cout << "YES"<<endl;
				else 
					cout << "NO"<<endl;}
	}
}