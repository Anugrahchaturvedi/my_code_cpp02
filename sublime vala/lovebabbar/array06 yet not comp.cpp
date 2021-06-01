#include<bits/stdc++.h>
using namespace std;
 vector<int > v;
 int uni(int a[], int n , int b[], int m);

  int uni(int a[], int n , int b[], int m)
{
   
   for(int i =0 ; i<n ; i++)
   {
      if (a[i]==b[i])
      {
          v.push_back(a[i]);
      }
      else 
     { v.push_back(a[i]);
      v.push_back(b[i]);}
   }
}
int print (vector<int> v)
{
    for(int i =0 ; i<v.size(); i++)
    {
        cout << v[i] << " ";
    }
}





int main()
{
	int a[]={1,3,4,4,4,55,66,88};
    int b[]= {2,3,5,6,78,99};
	int n= sizeof(a)/sizeof(a[0]);
    int m= sizeof(b)/sizeof(b[0]);
	uni(a,n,b,m);
    print(v);

}