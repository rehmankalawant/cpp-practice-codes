#include "Wallet.h"
#include "InvalidAmountException.h"
#include "InsufficientBalanceException.h"

int main() {
    int walletId;
    string holderName;
    double balance;

    Wallet wallet;

    int choice;

    do {
        cout << "\n1. Create Wallet";
        cout << "\n2. Add Money";
        cout << "\n3. Withdraw Money";
        cout << "\n4. Display Wallet Details";
        cout << "\n5. Exit";

        cout << "\nEnter what you wanted to do - ";
        cin >> choice;

        try {
            switch (choice) {

            case 1: {
                cout << "\nwalletId = ";
                cin >> walletId;

                cout << "\nholderName = ";
                cin >> holderName;

                cout << "\nbalance = ";
                cin >> balance;

                wallet = Wallet(walletId, holderName, balance);

                cout << "\nWallet created successfully!";
                break;
            }

            case 2: {
                double addAmount;

                cout << "\nEnter the Amount to Add = ";
                cin >> addAmount;

                wallet.addMoney(addAmount);

                cout << "\nMoney added successfully!";
                cout << "\n" << wallet;

                break;
            }

            case 3: {
                double withdrawAmount;

                cout << "\nEnter the Amount to Withdraw = ";
                cin >> withdrawAmount;

                wallet.widrawMoney(withdrawAmount);

                cout << "\nMoney withdrawn successfully!";
                cout << "\n" << wallet;

                break;
            }

            case 4:
                cout << wallet;
                break;

            case 5:
                cout << "\nThank you!";
                break;

            default:
                cout << "\nInvalid choice!";
            }
        }

        catch (const InvalidAmountException& err) {
            cout << "\nException is - " << err.what() << endl;
        }

        catch (const InsufficientBalanceException& err) {
            cout << "\nException is - " << err.what() << endl;
        }

    } while (choice != 5);

    return 0;
}