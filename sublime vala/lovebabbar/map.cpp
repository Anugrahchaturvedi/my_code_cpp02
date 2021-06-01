#include<bits/stdc++.h>
using namespace std;
int main()
	{
       //normal map stores in sorted order acc to unique key or they are (red black tree)
 map<int,string>m;
 m[1]="abc";
 m[4]="anu";
 m.insert({5,"ahsj"}); //  0(logn)
 map<int,string>::iterator it ;
 for(it=m.begin();it !=m.end();it++)
 {
 	cout << (*it).first << " " <<(*it).second <<endl;
 }
 for(auto &pr:m)
 {
 	cout<<pr.first <<" "<<pr.second<<endl;
 }
 m.erase(3); // can take both itearator or key
auto ct = m.find(3); // to find any key in the map 
if(it ==m.end()) // if not found it will return end;
{
	cout << "no ba;";
}
else
{
	cout << (*ct).first <<" " << (*ct).second <<endl;
}
}

