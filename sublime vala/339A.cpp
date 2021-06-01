#include <bits/stdc++.h>
#include<vector>
#define ll long long int
#define fo(i,n) for(int i =0 ; i<n ; ++i) 
using namespace std ;
int main()
{      int a ;
     vector<int>v;
     cin>>a;
     v.push_back(a);
     cout << a << endl;
     sort(v.begin(),v.end());
     for (int x : v)
     {
     	cout << x ;
     }
	return 0;
}