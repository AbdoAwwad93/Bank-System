#include "Account.h"

void Account::set_username(string username)
{
	this->username = username;
}

void Account::set_password(string password)
{
	this->password = password;
}

void Account::set_balance(double balance)
{
	this->balance=balance;
}
double Account::get_balance() {
	return this->balance;
}
string Account::get_password() {
	return password;
}
string Account::get_username() {
	return username;
}

void Account::withdrawe(double money)
{
	if (money > this->balance) {
		cout << "Account : " << username << " has no enough money.\n";
	}

	else {
		this->balance -= money;
		cout << "Withdrew " << money << " from account " << username << "." << endl;
	}
}

void Account::deposite(double money)
{
	this->balance += money;
}

