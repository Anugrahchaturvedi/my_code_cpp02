#include <bits\stdc++.h>
#include<vector>
#define ll long long int
#define fo(i,n) for(int i =0 ; i<n ; ++i) 
using namespace std ;
int main()
{    string str;
	ll n;
   vector<string> v;
   cin>>n;
   fo(i,n)
{   cin >> str;	
   v.push_back(str);}
   fo(i,n)
   { 

   	if (v[i].size()>10)
   	{
   		int a = v[i].size();
   		
   		cout << v[i][0]<< ((v[i].size())-2) << (v[i][a-1])<< endl;
   	}
   	else 
   		cout << v[i]<< endl ;
   }
    return 0;
}