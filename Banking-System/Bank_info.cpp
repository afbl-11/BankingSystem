#include "Bank_info.h"
#include<iostream>

using namespace std;

void Bank_info::accountAccess(int acc,int pass)
{
	int account_length = sizeof(accounts) / sizeof(accounts[0]);
	int pass_length = sizeof(password) / sizeof(password[0]);

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
		
		checkBalance(balance, withdrawal_amount, newBalance);
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
	}break;
	}
}
void Bank_info::Withdrawal(double balance)
{
	cout << "Enter withdrawal amount: ";
	cin >> withdrawal_amount;

	if (newBalance != 0)//on the first attemt this wont work
	{
		newBalance -= withdrawal_amount;
		cout << "Your New Balance(if): " << newBalance<<endl;
	}
	
	}
	//if new balance is not equal to 0 else if would not work anymore
	else if(withdrawal_amount > balance)
	{
		cout << "Insufficient Funds!" << endl;
		withdrawal_amount = 0;
		break;
		if (withdrawal_amount > newBalance)
		{
			cout << "Insufficient newFunds!" << endl;
			withdrawal_amount = 0;
		}
	}
	
	else
	{
		balance -= withdrawal_amount;
		cout << "Your New Balance (else): " << balance;
		newBalance = balance;
	}
}

void Bank_info::checkBalance(double balance, double withdrawable,double newBalance)
{
	double holdsZero = 0;

	if (withdrawable == holdsZero)//this shall only work in the first attempt since we havent done any withdrawal yet
	{
		cout << "Your Balance(if): "<<balance;
	}
	else
	{
		cout << "Your Balance:(else) " << newBalance;//this will be always true in the first attempt
	}
	
	
}