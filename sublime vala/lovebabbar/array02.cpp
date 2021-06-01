#include<bits/stdc++.h>
using namespace std;


int terminalvalues(int a[], int size)
{
    sort(a,a+size);
    int max = a[size-1];
    int min = a[0];
    cout << "max is " <<max << endl;
    cout << "min is "<<min <<endl;
    return 0 ;
}
  int main()
 {
     int a[]={4,5,56,4,5,8};
	int size= sizeof(a)/sizeof(a[0]);
	terminalvalues(a,size);

 }