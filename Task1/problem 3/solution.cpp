#include<iostream>
using namespace std;
double BinarySearch(int* arr, int n, int no, int begin, int end);
int main()
{
    int arr[] = { 1,2,4,5,8,9 };
    int x = BinarySearch(arr, 6, 10, 0, 6);
    cout << x;

    return 0;
}
double BinarySearch(int* arr, int n, int no, int begin, int end)
{
    int i;
    i = (end + begin) / 2;
    if (arr[i] == no)
    {
        return i;
    }
    else
    {
        if (arr[i] > no)
        {
            end = i - 1;
            return BinarySearch(arr, n, no, begin, end);
        }
        else if (arr[i] < no)
        {
            begin = i + 1;
            return BinarySearch(arr, n, no, begin, end);
        }
    }
    return -1;
}
