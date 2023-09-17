#include "Bank_info.h"
#include<iostream>

using namespace std;

void Bank_info::accountAccess(int acc,int pass)
{
	int account_length = sizeof(accounts) / sizeof(accounts[0]);
	int pass_length = sizeof(password) / sizeof(password[0]);
	//string& temp_result;
	string* result = nullptr; // this does nothing (yet i guess)

	for (int i = 0; i != account_length; i++)
	{
		int temp_account = accounts[i];
		if (acc == temp_account)
		{
			//if got inside the account
			if (pass == password[i])
			{
				BankMenu(temp_account, acc_balance[i]);
				break;
			}
			else
			{
				cout << "Wrong password!";
					break;
			}
		}
		else if(i >= account_length-1)
		{
			cout << "Did not found it!";
		}
		//temp_account = 0;
		//temp_acc_balance = 0;

	}
	
}
void Bank_info::BankMenu(int acc, double balance)
{
	char choice;
	/*cout << "hello there account: " << acc << endl;
	cout << "this is your current balance: " << balance<<endl;*/

	cout << "[1] - Balance Inquiry" << endl << "[2] - Withdraw" << endl<< "[3] Logout"<<endl;
	cin >> choice;
	switch (choice)
	{
	case '1':
	{
		cout << "Your Current Balance: " << balance << endl;
		/*
		* Fixed the problem where the current balance is 0 which should be 1000 - done
		* balance doesnt update
		*/
	}
	break;
	case '2':
	{
		Withdrawal(balance);
	}
	break;
	case '3'://exit
	{
		exit(0);
	}
	break;
	default:
	{
		cout << "Invalid Key!" << endl;
	}
		break;
	}
}
void Bank_info::Withdrawal(double balance)
{
	
	//double temp_balance = balance;
	cout << "Enter withdrawal amount: ";
	cin >> withdrawal_amount;
	if (withdrawal_amount > balance)
	{
		cout << "Insufficient funds!" << endl;
	}
	else
	{
		newBalance += balance - withdrawal_amount;
		cout << "Your new balance: " << newBalance <<endl;
	}
	
	
}