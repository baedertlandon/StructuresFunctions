#include <iostream>
using namespace std;

struct bank_account
{
    int account_number;
    int balance;
};

void deposit_money(bank_account& account_ref, int deposit_amount)
{
    account_ref.balance = account_ref.balance + deposit_amount;
    cout << "Balance inside function (reference): " << account_ref.balance << endl;
}

int main()
{
    bank_account acc;
    int deposit_amount;

    cin >> acc.account_number;
    cin >> acc.balance;
    cin >> deposit_amount;

    cout << "Balance before call (main): " << acc.balance << endl;

    deposit_money(acc, deposit_amount);

    cout << "Balance after call (main): " << acc.balance << endl;

    return 0;
}