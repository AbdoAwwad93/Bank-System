#include <iostream>
#include "Account.h"
using namespace std;
class linkedlist
{
	struct node {
		Account account;
		node* next;
		node(Account account) : account(account), next(NULL) {}
	};
public:
	node* head, * tail;
	int length;
	linkedlist() {
		head = tail = NULL;
		length = 0;
	}
	void inertnode(Account account);
	void delete_node(string username , string password);
	Account* find(string username, string password);
};