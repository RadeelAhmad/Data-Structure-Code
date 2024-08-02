#include <iostream>
using namespace std;

bool isPrime(int num) { // Returns true if num is prime, false otherwise
    if (num <= 1) {
        return false;
    }
    
    for (int i = 2; i * i <= num; i++) { 
        if (num % i == 0) {
            return false;
        }
    }
    
    return true;
}

int countPrimes(int n) {  // Returns the number of prime numbers up to n
    int count = 0;
    
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            count++;
        }
    }
    
    return count;
}

int main() {
    int num;
    char choice;
    do{
    cout << "Enter a positive integer: ";
    cin >> num;
    
    int primeCount = countPrimes(num);
    cout << "Number of prime numbers up to " << num << ": " << primeCount << endl;
    
    cout << "Do you want to continue? (y/n): ";
    cin >> choice;
    
    }while (choice == 'y' || choice == 'Y' );
   
    
    return 0;
}
