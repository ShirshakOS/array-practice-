#include <iostream>
using namespace std;

int main()
{
    int even = 0, odd = 0;
    int a[5] = {2, 32, 5, 66, 7};
    for (int i = 0; i < 5; i++)
    {
        if (a[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    cout << "Number of even: " << even << endl;
    cout << "Number of odd: " << odd << endl;
    return 0;
}