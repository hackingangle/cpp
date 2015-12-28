#include <iostream>
using namespace std;
int main() {
    int a[1000], n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 1; j < n - i; j++)
        {
            if (a[j-1] > a[j])
            {
                int tmp = a[j-1];
                a[j-1] = a[j];
                a[j] = tmp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
}
