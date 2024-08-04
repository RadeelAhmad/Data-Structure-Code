#include <iostream>
using namespace std;

void posNegSort(int arr[], int size) { 
    for (int i = 0; i < size; i++) { 
        if (arr[i] > 0) {  // If the current element is positive

            for (int j = i + 1; j < size; j++) {   
                
                if (arr[j] > 0 && arr[j] < arr[i]) {  // If the current element is positive and less than the current minimum
                    int temp = arr[i]; 
                    arr[i] = arr[j];
                    arr[j] = temp;   
                }
            }
        }
    }
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    posNegSort(arr, size);

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
