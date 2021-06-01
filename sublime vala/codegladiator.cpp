#include <bits/stdc++.h>
using namespace std ;
int main()
{
	
	    ios_base::sync_with_stdio(false);
	        cin.tie(NULL);
	        string v;
	        cin>>v;
	         int n ;
	        cin >>n;
	        int f=0;
	        while(n--)
	        {
	        	int j =0;
	        	string s;
	        	cin >> s;
	        	if (s==v)
	        		{f=1;}
	        	for(int i = 0; i < s.size(); i++)
	        	{
         if(v[j] == s[i])
         j++;
         if(j == v.size())
         f=1;
	        }


	        if(f==1)
	        	cout << "positive" <<endl;
	        else
	        	cout << "negative " <<endl;
	    }
	        
	        
	      
	       

}