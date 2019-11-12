#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int a, b;
        cin >> a >> b;
        cout << a + b << '\n';
    }
    return 0;
}

int main()
{
    int t;
    int a[100], b[100];
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> a[i] >> b[i];
    }
    for (int i = 0; i < t; i++)
    {
        cout << a[i] << b[i];
    }
return 0;
