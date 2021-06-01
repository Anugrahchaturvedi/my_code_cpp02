#include<bits/stdc++.h>
using namespace std ;
int main()
{
	int t ;
	cin >> t ;
	while (t--)
	{
		int n , k, count =0 ,flag =0 ;
		cin>>n>>k;
		string s ;
		cin >>s;
		int x=0, y=0 ;
        
 while(x<n)
 {  
 	count =0 ;
 	if (s[x]=='*')
 	{
 		while(x<n && s[x]=='*')
 		{
 			count+=1;
 			x+=1;
 			
 		}
 		 

 	}
 		

 } 
      
     if (y>=k)
		
			{cout << "YES"<<endl;}
       else cout << "NO"<<endl;
	
	}
}