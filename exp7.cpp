#include <iostream>
using namespace std;
int partition(int arr[], int low, int high)
{
    int pivot = arr[high], i = (low - 1);
    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main()
{

    cout << endl;
    cout << "Sahil Khatri - 2020UII7414" << endl;
    cout << endl;
    int n;
    cout << "Enter no. of elements :";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element no. " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << endl;
    quickSort(arr,0, n-1);
    cout << "Elements after sorting are :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << endl;
}