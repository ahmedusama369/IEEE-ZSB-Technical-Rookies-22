#include<iostream>
using namespace std;
int sum(int* arr, int n);
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    int sum1 = 0;
    for (int i = 0; i < n; i++) sum1 = sum1 + arr[i];
    int sum2 = 0;
    int j = 0;
    while (j < n)
    {
        sum1 = sum1 + arr[j];
        j++;
    }
}

int sum(int* arr, int n)
{
    if (n == 0) return 0;
    return arr[n - 1] + sum(arr, n - 1);
}


