#include <bits/stdc++.h>
using namespace std ;
int main()
{ 
  int t ; cin >> t ;
   while (t--)
  { int c1 =0;
    int n;
    cin>>n;
    string b;
    cin>>b;
    
  	for (int i =0 ; i < n ;i++)
  	 {
  		if (b[i]=='0')
  		  			c1++;
      }


      if (c1>30)
        cout << "NO"<<endl;
      else
        cout << "YES"<<endl;
      }

	return 0 ;
}