#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t ;
	cin >>t ;
	while (t--)
	{
	  long long int n ,k,x,y;
	  cin>>n>>k>>x>>y;
      if (x==y)
      	{cout<< n <<" "<<n<<endl;}
      else if (x>y)
      {
      	vector<pair<long long ,long long>>v;
	       v.push_back(make_pair(n,n-x+y));
	       v.push_back( make_pair(n-x+y,n));
	       v.push_back(make_pair(0,x-y));
	       v.push_back(make_pair(x-y,0));
	      
	       if(k<n)
	       cout<<v[k-1].first<<" "<<v[k-1].second<<endl;
	       else
	       cout<<v[k%n].first<<" "<<v[k%n].second<<endl;
      }
      else if(y>x)
      {
          vector<pair<long long ,long long>>v;
	       v.push_back(make_pair(n-x+y,n));
	       v.push_back( make_pair(n,n+y-x));
	       v.push_back(make_pair(y-x,0));
	       v.push_back(make_pair(0,y-x));
	      
	       if(k<n)
	       cout<<v[k-1].first<<" "<<v[k-1].second<<endl;
	       else
	       cout<<v[k%n].first<<" "<<v[k%n].second<<endl;	
      }
	}
} 