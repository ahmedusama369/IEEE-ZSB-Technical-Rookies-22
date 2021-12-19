// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int n, r;
    int j = 0;
    r = rand() % 10 + 1;
    while (true)
    {
        cin >> n;
        j++;
        if (n == r) break;
    }
    cout << j;
    return 0;
}
