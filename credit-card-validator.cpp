#include <iostream>

using namespace std;

int luhn_check(string cardNumber) {
  int sum = 0;
  int nDigits = cardNumber.length();
  int parity = nDigits % 2;
  for (int i = 0; i < nDigits; i++) {
    int digit = cardNumber[i] - '0';
    if (i % 2 == parity) {
      digit *= 2;
      if (digit > 9) {
        digit -= 9;
      }
    }
    sum += digit;
  }
  return (sum % 10 == 0) ? 1 : 0;
}

int main() {
  string cardNumber = "4539148803436467";

  if (luhn_check(cardNumber) == 0) {
    cout << "Valid card number" << endl;
  } else {
    cout << "Invalid card number" << endl;
  }
}