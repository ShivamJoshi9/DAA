#include <iostream>
using namespace std;

int find(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 10 == key)
            return arr[i];
    }
    return 0;
}

int main()
{
    int T;
    cout << "Enter the number of test cases : ";
    cin >> T;
    while (T > 0)
    {
        int n, key;
        cout << "Enter number of elements : ";
        cin >> n;
        int arr[n];
        cout << "Enter the elements : " << endl;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        cout << "Enter the kth key : ";
        cin >> key;

        int fn = find(arr, n, key);
        if(fn == 0)
            cout<<"not present"<<endl;
        else
            cout<<fn<<endl;
        T--;
    }
    return 0;
}