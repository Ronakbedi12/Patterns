#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        // print space
        int space = n - i;
        while (space)
        {
            cout << " ";
            space -= 1;
        }

        // 1st triangle
        int j = 1;
        while (j <= i)
        {
            cout << j;
            j += 1;
        }
        // print 2nd triangle
        int start = i - 1;
        while (start)
        {
            cout << start;
            start -= 1;
        }
        cout << endl;
        i += 1;
    }
}