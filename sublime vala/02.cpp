#include <bits/stdc++.h>
#include<vector>
#include<string>
#define ll long long int
#define fo(i,n) for(int i =0 ; i<n ; ++i) 
using namespace std ;
int main()
{   string str ;
cin >> str;	  
   fo(i,str.size())
   {
      if (str[i]== 'A'||str[i]== 'E' ||str[i]== 'I' ||str[i]== 'O'||str[i]=='U'||str[i]=='Y'||str[i]=='a'||str[i]=='e'|| str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='y')
      continue ;
      cout << "."<< char(tolower(str[i])); 
       }

   
   return 0;
}