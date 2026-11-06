#include <iostream>
using namespace std;

int sumOfDigits(int n) {
    int sum = 0;
    while (n != 0) {

        // Extract the last digit
        int last = n % 10;

        // Add last digit to sum
        sum += last;

        // Remove the last digit
        n /= 10;
    }
    return sum;
}
int reverse_num(int n) {
    int reverse = 0;
    int remainder;
    while (n != 0) {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n /= 10;
    }
    return reverse;
}
bool palindrome(int n) {

    return n == reverse_num(n);
}

int main() {
    cout << "Enter Number = ";
    int n;
    cin >> n;
    cout << "Is number Palindrome? : " << (palindrome(n) ? "Yes" : "No") << endl;
    cout << "Sum of Digits are : " << sumOfDigits(n) << endl;
    cout << "Reversed Number is = " << reverse_num(n);
    return 0;
}