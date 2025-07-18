#include <iostream>
using namespace std;

void swap(int arr[], int size) 
{
    int pos = 0;
    for(int i = 0; i < size; i++)
    {
        
        if(arr[i] != 0)
        {
            arr[pos] = arr[i];
            pos++;
        }


    }
    // Shift the remaining elements to the left
    for(int i = pos; i < size; i++)
    {
        arr[i] = 0;
    }
    cout << "Array after swapping: ";
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    
}

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    swap(arr, size);
    
    return 0;
}
