#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n - i)
        {
            cout << " ";
            j += 1;
        }
        int num = 1;
        while (num <= i)
        {
            cout << i;
            num += 1;
        }
        cout << endl;
        i += 1;
    }
}