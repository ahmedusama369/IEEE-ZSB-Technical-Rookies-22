#include<iostream>
using namespace std;
int BinarySearch(int* arr, int n, int l, int r);
int main()
{
    int arr[7] = { 1,2,3,5,8,10,13 };
    int y = BinarySearch(arr, 50, 0, 6);
    cout << y;
    return 0;
}
int BinarySearch(int* arr, int n, int l, int r)
{
    int mid = (r + l) / 2;
    if (r != l || (arr[l] == n && arr[r] == n))
    {
        if (arr[mid] == n) return mid;
        else if (arr[mid] > n)
        {
            r = mid - 1;
            return BinarySearch(arr, n, l, r);

        }
        else if (arr[mid] < n)
        {
            l = mid + 1;
            return BinarySearch(arr, n, l, r);

        }
    }
    return -1;

}
