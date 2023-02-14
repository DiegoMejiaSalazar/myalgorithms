#include <iostream>

using namespace std;

int* insertionSort(int elements[], int size) {
    int key = 0;
    int secondIndex=0;
    for (int index = 1; index < size; index++)
    {
        key = elements[index];
        secondIndex=index-1;
        while (secondIndex >= 0 && elements[secondIndex] > key)
        {
            elements[secondIndex + 1] = elements[secondIndex];
            secondIndex--;
        }
        elements[secondIndex+1]=key;
    }
    return elements;
}

// A utility function to print an array
// of size n
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main(int argc, char const *argv []) {
    int arr[] = { 12, 11, 13, 5, 6 };
    int N = sizeof(arr) / sizeof(arr[0]);
 
    int* elements = insertionSort(arr, N);
    printArray(elements, N);
 
    return 0;
}
