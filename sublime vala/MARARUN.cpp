#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
	ios_base::sync_with_stdio(false);
	 cin.tie(NULL);
	 ll t ;
	 cin>>t;
	 while(t--)
	 {ll D , d,a,b,c;
	 	cin>>D>>d>>a>>b>>c;
	 	ll temp = D*d;
	 	if (temp>=42)
	 	{
	 		cout << c <<endl;
	 	}
	 	else if (temp>=21 && temp<=42)
	 	{
	 		cout << b<<endl;
	 	}
	 	else if (temp>=10 && temp<=21)
	 	{
	 		cout << a<<endl;
	 	}
	 	else 
	 		cout << 0<<endl;
	 }

}