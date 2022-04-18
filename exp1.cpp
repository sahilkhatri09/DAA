#include <iostream>
using namespace std;
void binarySearch(int arr[], int n, int key){
    int low = 0, high = n - 1;
    int ans = 0;
    while (low <= high){
        int mid = low + (high - low) / 2;
        ans++;
        if (arr[mid] == key){
            cout << "Element is present at index " << mid << " and found after " << ans << " operations" << endl;
            return;
        }
        else if (arr[mid] < key){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    cout << "Element not found" << endl;
}
void linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++){
        if (arr[i] == key){
            cout << "Element is present at index " << i << " and found after " << i + 1 << " operations" << endl;
            return;
        }
    }
}
int main()
{
    cout << endl;
    cout << "SAHIL KHATRI - 2020UII7414" << endl;
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
    cout << "Element to search :";
    int key;
    cin >> key;
    binarySearch(arr, n, key);
    linearSearch(arr, n, key);
    cout << endl;
    return 0;
}