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
		long long n , k ;
		cin>>n >>k ;

		long long a[n];
		for(int i =0 ; i<n ; i++)
		{
			cin >>a[i];
		}
   int t = 0 ;
   int na =0 ;
   bool slow = false ;
   bool bif = false ;
		for(int i =0 ; i<n ; i++)
		{
			if (a[i]==-1)
				{na ++ ;}
			   else if  (a[i]==1)
				{t++;}
				else if (a[i]==0)
				{} 
				else {

					if (a[i]>k)
						{
							slow = true ;
						 }
					      t+=a[i];
					      bif =true;
				}}
				if ((n- na < ceil(float(float(n)/ float(2)))))
					cout << "Rejected"<<endl;
					else if (slow == true)
						cout << "Too Slow "<<endl;
					else if (na == 0 && bif ==false)
						cout << "Bot"<<endl;
					else 
						cout<<"Accepted"<<endl;
				}
	}
