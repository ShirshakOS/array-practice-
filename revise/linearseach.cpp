// return the index of given element in an array
#include <iostream>
using namespace std;

int main()
{
    int index, i, a[5] = {32, 4, 5, 6, 7};
    int n = 5;
    for (i = 0; i < 5; i++)
    {
        if (a[i] == n)
        {
            index = i;
        }
    }
    cout << "Index: " << i << endl;
    return 0;
}