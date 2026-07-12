#include <iostream>
using namespace std;

int main() {
    // Your code goes here
    char op;
    int  num1, num2;

    cout << "Enter operator: ";
    cin >> op;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch (op) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0)
                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            else
                cout << "Error" << endl;
            break;
        default:
            cout << "Invalid operator." << endl;
    }
    return 0;
}


#include <iostream>
using namespace std;

int main() {
    // Your code goes here
    int n;
    cout << "Enter the number of elements:";
    cin >> n;

    int *arr = new int[n];
    double sum = 0;

    cout << "Enter " << n << " elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    double average = sum / n;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;
    return 0;
}
//Check number is prime or not
#include <iostream>
using namespace std;

int main() {
    // Your code goes here
    int n, i, flag = 0;
    cout << "Enter a positive integer: ";
    cin>>n;
    for(i=2; i<=n/2; ++i) {
        if(n%i==0) {
            flag=1;
            break;
        }
    }
    if(flag==0)
        cout << n << " is a prime number." << endl;
    else
        cout << n << " is not a prime number." << endl;
    return 0;
}

//Reverse a given number.
#include <iostream>
using namespace std;

int main() {
    // Your code goes here
    int n, rem, rev = 0;
    cout << "Enter a number: ";
    cin >> n;

    while (n != 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }

    cout << "Reversed Number: " << rev << endl;
    return 0;
}


//MINI PROJECT - ATM Menu Program (Balance Check, Deposit, Withdraw).

#include <iostream>
using namespace std;

int main() {
    int choice;
    double balance = 10000.0; // Initial balance
    double amount;

    do {
        cout << "\n========== ATM MENU ==========\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Current Balance: Rs. " << balance << endl;
                break;

            case 2:
                cout << "Enter amount to deposit: Rs. ";
                cin >> amount;

                if (amount > 0) {
                    balance += amount;
                    cout << "Deposit Successful!\n";
                    cout << "Updated Balance: Rs. " << balance << endl;
                } else {
                    cout << "Invalid deposit amount!\n";
                }
                break;

            case 3:
                cout << "Enter amount to withdraw: Rs. ";
                cin >> amount;

                if (amount <= 0) {
                    cout << "Invalid withdrawal amount!\n";
                } else if (amount > balance) {
                    cout << "Insufficient Balance!\n";
                } else {
                    balance -= amount;
                    cout << "Withdrawal Successful!\n";
                    cout << "Remaining Balance: Rs. " << balance << endl;
                }
                break;

            case 4:
                cout << "Thank you for using the ATM!\n";
                break;

            default:
                cout << "Invalid choice! Please try again.\n";
        }

    } while (choice != 4);

    return 0;
}