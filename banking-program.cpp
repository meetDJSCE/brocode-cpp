#include <iostream>

using namespace std;

void depositMoney(double money) {
  cout << "You have deposited: " << money << endl;
}

void withdrawMoney(double money) {
  cout << "You have withdrawn: " << money << endl;
}

void checkBalance(double balance) {
  cout << "Your current balance is: " << balance << endl;
}

int main() {
  double balance = 0;
  int choice;
  cout << "Welcome to the banking program!" << endl;
  cout << "1. Deposit money" << endl;
  cout << "2. Withdraw money" << endl;
  cout << "3. Check balance" << endl;
  cout << "4. Exit" << endl;

  do {
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
      case 1:
        double deposit;
        cout << "Enter the amount you want to deposit: ";
        cin >> deposit;
        depositMoney(deposit);
        balance += deposit;
        break;
      case 2:
        double withdraw;
        cout << "Enter the amount you want to withdraw: ";
        cin >> withdraw;
        if (withdraw > balance) {
          cout << "Insufficient balance!" << endl;
        } else {
          withdrawMoney(withdraw);
          balance -= withdraw;
        }
        break;
      case 3:
        checkBalance(balance);
        break;
      case 4:
        cout << "Thank you for using the banking program!" << endl;
        break;
      default:
        cout << "Invalid choice!" << endl;
    }
  } while (choice != 4);
  return 0;
}