#include <iostream>

using namespace std;

int searchDQ(int key, int a[], int low, int high)
{
    if (low > high) return -1;
    int mid = (low + high) / 2;
    if (a[mid] == key) return mid;
    if (a[mid] > key)
    return searchDQ(key, a, low, mid-1);

    return searchDQ(key, a, mid+1, high);
}
int searchVL(int key, int a[], int low, int high)
{
    int mid;
    while(low<=high)
    {
        mid = (low + high) / 2;
        if (a[mid] == key) return mid;
        if (a[mid] > key)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int arr[9] = {1, 3, 4, 8, 10, 44, 77, 84, 90};
    cout << searchDQ(90,arr,0,9) << endl;
    cout << searchVL(90,arr,0,9) << endl;
    return 0;
}
