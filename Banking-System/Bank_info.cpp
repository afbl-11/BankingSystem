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
	}
	
}
void Bank_info::BankMenu(int acc, double balance)
{
	char choice;
	

	cout << "[1] - Balance Inquiry" << endl << "[2] - Withdraw" << endl<< "[3] Logout"<<endl;
	cin >> choice;
	switch (choice)
	{
	case '1':
	{
		
		cout << "Your Balance: " << balance - withdrawal_amount<<endl;

		 // updation of balance doesnt happen because we still get the original balance
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
	 double temp_balance = balance;
	cout << "Enter withdrawal amount: ";
	cin >> withdrawal_amount;
	if (withdrawal_amount > balance)
	{
		cout << "Insufficient funds!" << endl;
	}
	else
	{
		newBalance = balance - withdrawal_amount; //the new balance gets the update of the money
		cout << "Your new balance: " << newBalance <<endl;
		
	}	
}