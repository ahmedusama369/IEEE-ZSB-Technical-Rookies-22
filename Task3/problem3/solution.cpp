#include<iostream>
using namespace std;

int main()
{
    char arr[5]={'#','@','$','%','&'};
    for(int i=0;i<10;i++)
    {
        if(i<7)
        {
            int r=rand()%26;
            char c='a'+r;
            cout<<c;
        }
        else if(i==9 || i==8){
            int index=rand() %5;
            cout<<arr[index];}
        else
            cout<<rand()%9;

    }

    return 0;
}
