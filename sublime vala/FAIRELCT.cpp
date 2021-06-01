#include<bits/stdc++.h>
#define fo(i,n) for(int i =0 ; i<n ;i++)
using namespace std ;
int main()
{ 
	int t ;
	cin >> t ;
	while (t--){
		int n , m;
		cin >> n  >>m;
		int a[n];
		int t1=0;
		fo(i,n)
		{
			cin >> a[i];
			t1 += a[i] ;
			}
			int b[m];
			int t2=0;
			fo(i,m)
			{
				cin>> b[i];
				t2+=b[i];
			}
			if (t1>t2)
			{
				cout << "0" <<endl;
			}
			else 
			{
			sort(a,a+n);
			sort(b,b+m);
			reverse(b,b+m);
		      fo(i,m)
			     {   
				  int k =0 ; 
				int count =0;
			
				if (k<m)
				{
				
				t1=t1-a[i]+b[k];
				t2 = t2 - b[k]+a[i];
				swap(a[i],b[k]);
				count++;
				k++;

				   if (t1>t2)
				     {     cout << count <<endl;
				     	break;
				     
                      }
               }
           }
            
           
       }
       	//cout << "-1"<<endl;
   }
	return 0 ;
}