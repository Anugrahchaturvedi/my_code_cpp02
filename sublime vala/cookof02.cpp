#include<bits/stdc++.h>
using namespace std ;
#define ll long long int 
int main()
{ ios_base::sync_with_stdio(false);
	ll t ;
	int f=0;
	ll x ,y ,k,n;
	cin >> t ;
	while (t--)
	{
	 cin >> x >> y >>k >>n;
		if (n==0)
			break;
		 else if (x>y)
		{
			for (int i =0 ; i<n ;i++)
			{
			if ((y+(i*k)) == (x-(i*k)))
				f=1;
		        }
		 }

		else if (x<y)
		{
			for (int i =0 ; i<n ;i++)
			{
				if ((y-(i*k)) == x+(i*k))
				f=1;
			    }
		}
		if (f==1)
			cout << "Yes"<<endl;
		else if (f==0)
		cout << "No"<<endl;
	}

	return 0;
}