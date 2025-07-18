#include<iostream>
using namespace std;

int binarysearch(int arr[], int size)
{
    int low = 0, high = size - 1;
    int result = size; // Default to size if no 1 is found

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == 1)
        {
            low = mid+1;    // look on the right side
        }
        else
        {
            result = mid;     // store index of first 1
            high = mid-1;
        }
    }

    return result; // Index of first 1, or size if none found
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array (only 0s and 1s, sorted): ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int index = binarysearch(arr, n);
    index = n - index; // Convert index to number of 0s

    cout << "The number of 0s in the array is: " << index << endl;
    return 0;
}  


