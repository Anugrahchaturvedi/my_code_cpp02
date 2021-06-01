#include <bits/stdc++.h>
using namespace std;
#define fo(u,k,n) for(u=k;u<=n;u++)
#define mp make_pair
int main()
{
	int t;
	cin>>t ;
	while(t--)
	{
		int n,m,k;
		cin>>n>>m>>k;
		vector<int> arr(k);
		 for(u,0,k-1)
		cin>>arr[u];
		map<long long , long long>mp;
		fo(u,0,k-1){
			if(arr[u]<=n)
				mp[arr[u]]++;
		}
		long c=0;
		for (auto it: mp)
		{
			if(it.second>=2) c++;
		}
	cout << c<<" ";
	for(auto it : mp)
	{
		if(it.second>=2) cout << it.first<<" ";
	}
	cout << endl;

	
}}