#include <iostream>
using namespace std;

// Function to calculate the sum of digits for numbers from 1 to 9
int sum_of_digits_1_to_9() {
    return 45; // Sum of digits from 1 to 9 is 45
}

// Function to calculate the sum of digits for numbers from 1 to n
int sum_of_digits(int n) {
    if (n <= 9) {
        // For numbers less than or equal to 9, sum of digits is n itself
        return n;
    } else {
        // Calculate the sum of digits for the last block of digits (1 to 9) and add it to the sum for multiples of 9
        return (n % 9 != 0 ? n % 9 : 9) + sum_of_digits_1_to_9() * (n / 9);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        cout << sum_of_digits(n) << endl;
    }

    return 0;
}
