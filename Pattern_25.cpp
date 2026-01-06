#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int num = 1;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n - i)
        {
            cout << " ";
            j += 1;
        }
        int k = 1;
        while (k <= i)
        {
            cout << num;
            num += 1;
            k += 1;
        }
        cout << endl;
        i += 1;
    }
}