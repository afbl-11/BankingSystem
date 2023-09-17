#pragma once
class Bank_info
{
private:

    double acc_balance[3] = { 1000, 2000,3000 };
    int accounts[3] = { 12345,54321 ,987654 };
    int password[3] = { 102938, 293847, 123456 };
    double withdrawal_amount = 0, newBalance = 0;
public:
    void accountAccess(int acc, int pass);
    void BankMenu(int acc, double balance);
    void Withdrawal(double balance);
    /*
    in order to get other accounts, i think we should store it in arrays. then for loop to access them, then like match it nalang with the tamang
    account
    */
};

