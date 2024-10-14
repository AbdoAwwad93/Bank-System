#pragma once
#include<iostream>
#include "Account.h"
#include "linkedlist.h"
using namespace std;
class Bank 
{
private:
	
public:
	linkedlist accounts;
	void create_account(string username,string password,double balance);
	void delete_account(string username, string password);
	void Withdraw(string username, string password, double money);
	void deposite(string username, string password, double money);
	double check_balance(string username, string password);
};

