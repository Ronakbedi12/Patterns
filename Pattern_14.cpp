// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int i = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= n)
//         {
//             char ch = 'A' + i + j - 2;
//             cout << ch;
//             j += 1;
//         }
//         cout << endl;
//         i += 1;
//     }
// }

// easy way

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 0;
    while (i < n)
    {
        int j = 0;
        char ch = 'A' + i;
        while (j < n)
        {
            cout << ch;
            ch += 1;
            j += 1;
        }
        cout << endl;
        i += 1;
    }
}
