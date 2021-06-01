#include<bits/stdc++.h>
using namespace std ;
int main()
{

	 ios_base::sync_with_stdio(false);
	int t ;
	cin >> t ;
	while (t--)
	{
		string s;
		cin >>s ;
		int l = s.size()-1;
		if (s.size()<10 )
		cout << "NO"<<endl;
	else if (s[0]>=48 && s[l]<=57)
		cout << "NO" <<endl;
	else if (s[0]>=65 && s[l]<=90)
		cout << "NO" <<endl;
	   else 
	   { 
	   	for (int i =0 ; i< s.size();i++)
	   	{
	   		if ((s[i]>='a' && s[i]<='z') && (s[i]>'1'&& s[i]<'9') &&  (s[i]=='#'|| s[i]=='@'|| s[i]=='%'|| s[i]=='&'|| s[i]=='?'))
	   			cout << "YES" <<endl;
	   				}
            }
	}
	return 0 ;
}