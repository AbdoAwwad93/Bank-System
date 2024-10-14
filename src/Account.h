#pragma once
#include <iostream>
using namespace std;
class Account
{
private:
	string username;
	string password;
	double balance;
public:
	
	Account(string username, string password, double balance) {
		this->username = username;
		this->balance = balance;
		this->password = password;
	}

	void set_username(string username);
	void set_password(string password);
	void set_balance(double balance);

	string get_username();
	string get_password();
	double get_balance();

	void withdrawe(double money);
	void deposite(double money);
};

