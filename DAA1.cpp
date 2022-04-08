#include <iostream>
using namespace std;

int bubble_sort(int arr[], int n)
{
    int c = 0, temp;
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                c++;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    return c;
}

void show(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter the number of elements : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<"Unsorted array : "<<endl;
    show(arr,n);
    int count = bubble_sort(arr, n);
    cout<<"Sorted array : "<<endl;
    show(arr, n);
    cout << "Number of shifts : " << count;
}