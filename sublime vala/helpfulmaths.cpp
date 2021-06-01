#include <bits/stdc++.h>
using namespace std ;
int main()
{ 
   ios_base::sync_with_stdio (false); 
	string s ;
	string ns ;
	cin >>s ;
	for(int i=0 ;i<s.size();i++)
	{
		if (s[i]!= '+')
			ns.push_back(s[i]);
	}
	sort(ns.begin(),ns.end());
	cout << ns[0];
	for(int i=1 ;i<ns.size();i++)
	{
          cout << "+" <<ns[i];
	}

	return 0;
}