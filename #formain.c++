#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int min = (a < b) ? a : b;

    for (int i = 1; i <= min; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            cout << i << endl;
        }
    }

    return 0;
}
