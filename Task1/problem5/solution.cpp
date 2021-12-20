#include<iostream>
using namespace std;
int sum(int* arr, int n);
int sumf(int* arr,int n);
int sumw(int* arr,int n);
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    int r1=sum(arr,n);
    int r2=sumf(arr,n);
    int r3=sumw(arr,n);
}

int sum(int* arr, int n)
{
    if (n == 0) return 0;
    return arr[n - 1] + sum(arr, n - 1);
}
int sumf(int* arr,int n)
{
    int sum1 = 0;
    for (int i = 0; i < n; i++) sum1 = sum1 + arr[i];
    return sum1;
}

int sumw(int* arr,int n)
{
    int sum2 = 0;
    int j = 0;
    while (j < n)
    {
        sum2 = sum2 + arr[j];
        j++;
    }
    return sum2;
}
