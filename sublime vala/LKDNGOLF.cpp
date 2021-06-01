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
	 {
      ll n,x,k;
      cin >>n>>x>>k;
      int f=(n+1)%k;

      if(x%k==0 || x%k==f)
      {
      	cout << "YES\n";
      }
      else 
      	{
      		cout<<"NO\n";
      	}

	 }

}