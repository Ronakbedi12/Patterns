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
        while (j <= i - 1)
        {
            cout << " ";
            j += 1;
        }
        int star = 1;
        while (star <= n - i + 1)
        {
            cout << "*";
            star += 1;
        }
        cout << endl;
        i += 1;
    }
}