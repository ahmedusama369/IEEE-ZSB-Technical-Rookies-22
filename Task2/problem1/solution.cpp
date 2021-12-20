#include<iostream>
#include<string>
using namespace std;

int main()
{
   string s;
   cin>>s;
   string s1;
   s1=string(s.rbegin(),s.rend());
   int j=0;
   for(int i=0;i<s.size();i++)
   {
       if(s[i]!=s1[i]) {
           j++;
           break;
       }
   }
   if(j>0) cout<<"no";
   else cout<<"yes";
   return 0;
}
