#include <bits/stdc++.h>
using namespace std ;
int main()
{
	 ios_base::sync_with_stdio(false);
	int t ;
	int c1=0; int c2=0;
	string s ;

	cin >> t ;
	while (t--)
	{
      cin >>s ;
      for (int i =0 ; i < s.size() ; i++)
            	{
            		if (s[i]=='0')
            			c1++;
            		else 
            			c2++;
            	}

      if (s.size()%2==0 && c1!=0 && c2!=0)
      {	
         cout << abs (c1-c2)/2 << endl;
            	           
        }
            else 
            	cout << "-1"<<endl;
       }
	return 0;
}