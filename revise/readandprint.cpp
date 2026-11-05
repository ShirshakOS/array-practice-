#include <iostream>
using namespace std;

void display(int n, int *a)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void read(int n, int *a)
{
    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

int main()
{
    int *a;
    int n = 4;
    a = new int[n];
    read(n, a);
    display(n, a);
    return 0;
}