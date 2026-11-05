// print the reverse of an array
#include <iostream>
using namespace std;

int main()
{
    int a[5] = {3, 23, 232, 435, 5};
    for (int i = 4; i >= 0; i--)
    {
        cout << a[i] << " ";
    }
    return 0;
}