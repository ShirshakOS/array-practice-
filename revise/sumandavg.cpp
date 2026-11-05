// sum and average of all elements in an array
#include <iostream>
using namespace std;

int Sum(int *a, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return sum;
}

float average(int n, int sum)
{
    return (float(sum) / n);
}

int main()
{
    int n = 5;
    int a[n] = {3, 4, 5, 6, 3};
    int sum = Sum(a, n);
    float avg = average(n, sum);
    cout << "Sum: " << sum << " Average: " << avg << endl;
    return 0;
}