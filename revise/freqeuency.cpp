// count the frequency of each element in an array

#include <iostream>
using namespace std;

void countFreq(int *a, int n)
{
    int count;
    bool flag;
    for (int i = 0; i < n; i++)
    {
        flag = false;
        count = 1;
        for (int j = i - 1; j >= 0; j--)
        {
            if (a[j] == a[i])
            {
                flag = true;
                break;
            }
        }
        if (flag)
        {
            continue;
        }
        else
        {
            for (int k = i + 1; k < n; k++)
            {
                if (a[k] == a[i])
                {
                    count++;
                }
            }
            cout << a[i] << " is repeated " << count << " times\n";
        }
    }
}

int main()
{
    int a[5] = {3, 23, 232, 435, 3};
    int n = 5;
    countFreq(a, n);
    return 0;
}