#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t ;
	cin >>t ;
	while (t--)
	{
		long long n , x , count=0;
		cin >> n >>x ;
		long long a[n];
		for(int i=0 ; i<n ; i++)
		{
			cin >>a[i];
		}

   int y = n-x;

      sort(a, a + n);
  
    // Traverse the sorted array
    for (int i=0; i<n; i++)
    {
       // Move the index ahead while there are duplicates
       while (i < n-1 && a[i] == a[i+1])
          i++;
  
    count++;
    }
     
		
	if (y >=count)
		cout << count<<endl;
	else
		cout << y <<endl;

	 

}}
