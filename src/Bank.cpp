#include "Bank.h"

void Bank::create_account(string username, string password, double balance)
{
	 Account new_account (username,password,balance);
	 accounts.inertnode(new_account);
}

void Bank::delete_account(string username, string password)
{
	accounts.delete_node(username,password);
}

void Bank::Withdraw(string username, string password, double money)
{
	Account* account = accounts.find(username, password);
		account->withdrawe(money);
}
void Bank::deposite(string username, string password, double money)
{
	Account* account = accounts.find(username, password);
	account->deposite(money);
}

double Bank::check_balance(string username, string password)
{
	Account* account = accounts.find(username, password);
	return account->get_balance();
}



