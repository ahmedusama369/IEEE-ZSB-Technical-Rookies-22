#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    string n;
    cin>>n;
    int r=6174;
    int j=0;
    while(1) {
       sort(n.rbegin(), n.rend());
       int a= stoi(n);
       sort(n.begin(), n.end());
       int b= stoi(n);
       j++;
       if(a-b==r) break;
       else
       {
           n= to_string(a-b);
           if(n.size()<4) n.push_back('0');

       }


    }

    cout<<j;
    return 0;
}
