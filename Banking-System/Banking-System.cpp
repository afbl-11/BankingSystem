#include<iostream>
#include"Bank_info.h"
#include"Miscs.h"

using namespace std;

Bank_info bankAccess;
Miscs misc;

int accNumber = 12345;
int pass = 102938;

int main()
{
    do
    {
        cout << "Enter Account Number: ";
        // cin >> accNumber;
        cout << "Enter Pin: ";
        // cin >> pass;
        while (true)
        {
            bankAccess.accountAccess(accNumber, pass);
        }

    } while (true);

}



