#include <iostream>

using namespace std;

// Function to print a chunk of the array
void printChunk(const int* chunk, int chunkSize) {
    for (int i = 0; i < chunkSize; i++) {
        cout << chunk[i] << " ";
    }
    cout << endl;
}

void chunkify(const int arr[], int n, int chunkSize) {   // Function to chunkify the array
    int numChunks = n / chunkSize + (n % chunkSize > 0);    // Calculate number of chunks

    for (int i = 0; i < numChunks; i++) {       // Loop through each chunk

        int chunkStart = i * chunkSize;      // Calculate the start index of the chunk

        int chunkEnd = min(chunkStart + chunkSize, n);  // Calculate the end index of the chunk
        
        printChunk(arr + chunkStart, chunkEnd - chunkStart); 
    }
}

int main() {
    int n, chunkSize;

    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];  // Declare array with user-specified size

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the chunk size: ";
    cin >> chunkSize;

    chunkify(arr, n, chunkSize);

    return 0;
}
