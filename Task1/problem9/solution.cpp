#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum1 = 0;
    int sum2 = 1;
    cout << 0 << " " << 1 << " ";
    int sum;
    for (int i = 0; i < n - 2; i++)
    {
        sum = sum1 + sum2;
        sum1 = sum2;
        sum2 = sum;
        cout << sum << " ";
    }
    return 0;
}
