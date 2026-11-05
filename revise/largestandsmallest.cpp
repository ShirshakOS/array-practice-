#include <iostream>
using namespace std;

int main()
{
    int a[5] = {3, 4, 9, 1, 0};
    int smallest, largest;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (a[j] < a[i])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    smallest = a[0];
    largest = a[4];
    cout << "Smallest: " << smallest << endl;
    cout << "Largest: " << largest << endl;
    return 0;
}