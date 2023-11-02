#include <iostream>

using namespace std; // Add this line

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int option;
    while (true) {
        cout << "1. Find prime numbers in a range\n2. Check if a number is prime \nSelect Option: ";
        cin >> option;

        if (option == 1) {
            int start, end;
            cout << "Enter the range (start end): ";
            cin >> start >> end;
            cout << "Prime numbers in the range: ";
            for (int i = start; i <= end; ++i) {
                if (isPrime(i)) cout << i << " ";
            }
            cout << endl;
        }
        else if (option == 2) {
            int num;
            cout << "Enter a number to check if it's prime: ";
            cin >> num;
            if (isPrime(num)) {
                cout << "Prime" << endl;
            }
            else {
                cout << "Not prime" << endl;
            }

        }
       
        else {
            cout << "Invalid option. Please choose 1 or 2" << endl;
        }
    }
    return 0;
}
