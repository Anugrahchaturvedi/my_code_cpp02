#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
int flooor(int sum,int p)
{

	int min = ceil((sum+1)/p);
	int max = 
}
int main()
{
	ios_base::sync_with_stdio(false);
	 cin.tie(NULL);
	 ll t ;
	 cin>>t;
	 while(t--)
	 {
	 	ll flag=0;
	 	ll g,p;
	 	ll x[10];
	 	cin>>g>>p;
	 	ll sum =0;
	 
	 	int i;
	 
	 	for (int i = 0; i<10; ++i)
	 	{
	 	 cin>>x[i];
	 
	 	}
	
	 	for ( i = g+1; i<10; i++)
	 	{
	 		sum+=x[i];
	 	}
	 	 	flooor(sum,p);
	 }
	 	
}