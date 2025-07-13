
// ***->>  PRIME number test  <<-//

// #include <iostream>
// using namespace std;

// bool isPrime(int n) {
//     if (n <= 1)
//         return false;
//     for (int i = 2; i <= n/2; i++) {
//         if (n % i == 0)
//             return false;
//     }
//     return true;
// }

// int main() {
//     int n;
//     cout << "Enter a num: ";
//     cin >> n;

//     if (isPrime(n)) {
//         cout << n << " is a prime number." << endl;
//     } else {
//         cout << n << " is not a prime number." << endl;
//     }

//     return 0;
// }



// 2 . ->> Automorphic Number  

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int square = n * n;

    // Count digits in n
    int digits = 0, temp = n;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }
  
    // square ka last digits  digit ka num ka heasab sa 
        int lastDigits = square % (int)pow(10,digits);

    if (lastDigits == n)
        cout << n << " is an Automorphic Number.";
    else
        cout << n << " is NOT an Automorphic Number.";

    return 0;
}
