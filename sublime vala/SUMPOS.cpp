#include<bits/stdc++.h>
using namespace std ;
int main()
{
	int t ;
	cin >> t;
	while (t--)
	{
		int x , y , z;
		cin >> x>>y>>z;
		int f1=0,f2=0,f3=0;
		if (x+y==z)
			f1=1;
		else if (y+z==x)
			f2=1;
		else if (x+z==y)
			f3=1;
		if (f1==1 || f2==1 || f3==1)
		{
			cout << "YES"<<endl;

		}
		else cout << "NO"<<endl;
	}
}