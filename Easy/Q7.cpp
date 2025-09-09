#include <iostream>
using namespace std;

void moveZeroes(int arr[], int n)
{
    if (n > 1)
    {
        int i = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] != 0)
            {
                swap(arr[i], arr[j]);
                i++;
            }
        }
    }
}
int main()
{
    int n;
    cout << "Enter array size : " << endl;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;

    cout << "Array : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    moveZeroes(arr, n);

    cout << "Array after moving zeros : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}