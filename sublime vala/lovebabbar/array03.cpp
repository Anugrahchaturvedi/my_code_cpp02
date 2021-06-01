#include<bits/stdc++.h>
using namespace std;
int sortthis(int a[], int n)
{
   int low=0;
   int mid=0;
   int high = n-1;
   while(mid<=high)
   {
       if (a[mid]=='0')
      { swap(a[low] , a[mid]);
       low++;
       mid++;}
       else if (a[mid]=='1')
      { mid++;}
       else if (a[mid]=='2')
      { swap(a[high],a[mid]);
       mid++;
       high--;}

   }
   for(int i =0; i<n ; i++)
   {
       cout <<a[i] <<" ";
   }
   return 0;
}
int main()
    
   { int arr[] = { 0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    sortthis(arr,n);
    return 0;
   }