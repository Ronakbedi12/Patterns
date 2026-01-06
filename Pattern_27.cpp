/*
1234554321
1234**4321
123****321
12******21
1********1
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        // print 1st triangle
        int j = 1;
        while (j <= n - i + 1)
        {
            cout << j;
            j += 1;
        }

        // print middle triangle

        int star = 1;
        while (star <= 2 * (i - 1))
        {
            cout << "*";
            star += 1;
        }

        // print 3rd triangle

        int k = n - i + 1;
        while (k)
        {
            cout << k;
            k -= 1;
        }
        cout << endl;
        i += 1;
    }
}