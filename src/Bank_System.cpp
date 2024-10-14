#include <iostream>
#include "Bank.h"
using namespace std;
Bank bank;
void create_account(string username,string password,double money);
void delete_Account(string username,string password);
void Withdraw(string username,string password,double money);
void deposite(string username,string password,double money);
void check_balance(string username, string password);
void displayGreeting();
bool valid_data(string &username, string &password);
void get_data(string & username, string& password);
void get_data(string & username, string& password,double &money);
void get_Option(int &type);
void end();

int main()
{
	string username;
	string password;
	double money = 0;
	int type;
	do {
		displayGreeting();
		get_Option(type);

			switch (type)
			{
			case 1:
				get_data(username, password, money);
				create_account(username, password, money);
				break;
			case 2:
				get_data(username, password);
				delete_Account(username, password);
				break;
			case 3:
				get_data(username, password, money);
				deposite(username, password, money);
				break;
			case 4:
				get_data(username, password, money);
				Withdraw(username, password, money);
				break;
			case 5:
				get_data(username, password);
				check_balance(username, password);
				break;
			case 0:
				end();
				return 0;
			}
		} while (type != 0);
	}

void create_account(string username, string password, double money)
{
	Account* temp = bank.accounts.find(username, password);
	if (temp) {
		cout << "Account Exists  \n";
	}
	else {
		if (money <= 0) {
			cout << "Invalid money.\t Account not created.\n";
		}
		else {
			bank.create_account(username, password, money);
			cout << "Account created successfully with Username " << username << "." << endl;
		}
	}
}

void delete_Account(string username, string password)
{
	if (valid_data(username, password)) {
		bank.delete_account(username, password);
		cout << "Account with Username "<<username<< " deleted successfully." << endl;
	}
	else {
		cout << "Failed to delete account: Wrong username or password "<< endl;
	}
	
}

void Withdraw(string username, string password, double money)
{
	if (valid_data(username, password)) {
		if (money <= 0) {
			cout << "Invalid money.\n";
		}
		else {
			bank.Withdraw(username, password, money);
		}
	}
	else {
		cout << "Failed to withdraw:  Wrong username or password." << endl;
	}
	
}

void deposite(string username, string password, double money)
{
	if (valid_data(username, password)) {
		if (money <= 0) {
			cout << "Invalid money\n";
		}
		else {
			bank.deposite(username, password, money);
			cout << "Deposited  " << money << " to account " << username << "." << endl;
		}
	}
	else {
		cout << "Failed to Deposite: Wrong username or password." << endl;
	}
}

void check_balance(string username, string password)
{
	if (valid_data(username, password)) {
		cout << "Balance for account " << username << ": " << bank.check_balance(username,password) << endl;
	}
	else {
		cout << "Failed to check balance: Account " << username << " not found." << endl;
	}

}
void displayGreeting() {
	cout << "******************************************" << endl;
	cout << "        Welcome to the Banking System     \n\n";
	cout << "Please choose from the following options : " << endl;
	cout << " 1. Create a new account                 " << endl;
	cout << " 2. Delete an account                    " << endl;
	cout << " 3. Deposit money                        " << endl;
	cout << " 4. Withdraw money                       " << endl;
	cout << " 5. Check account balance                " << endl;
	cout << " 0. Exit                                 " << endl;
	cout << "Enter yout option: ";
}


bool valid_data(string &username, string &password)
{
	Account *temp = bank.accounts.find(username,password);
	 return temp != NULL;
	
}

void get_data(string& username, string& password)
{
	cout << "\nEnter Username : ";
	cin >> username;
	cout << "\nEnter Password : ";
	cin >> password;
}

void get_data(string& username, string& password, double &money)
{
	cout << "Enter Username : ";
	cin >> username;
	cout << "\nEnter Password : ";
	cin >> password;
	cout << "\nEnter money : ";
	cin >> money;
}

void get_Option(int &type)
{
		while (true) {
			cin >> type;
			if (cin.fail()) {
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "Invalid input. Please enter a numeric value.\nEnter yout option: ";
			}
			else {
				cin.ignore(numeric_limits<streamsize>::max(),'\n');
				if (type<0 ||type>5) {
					cout << "Please Enter value between 0 and 5 \n";
				}
				 break;
			}
		}
	}

void end()
{
	cout << "\n      Thank you for using our service!  " << endl;
	cout << "     Your transactions are complete.      " << endl;
	cout << "         See you next time!               " << endl;
	cout << "******************************************" << endl;
}


