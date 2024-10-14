#include "linkedlist.h"

void linkedlist::inertnode(Account account)
{
	node* new_node = new node(account) ;
	//new_node->data->set_username(account.get_username());
	//new_node->data->set_password(account.get_password());
	if (head == NULL) {
		head = tail =  new_node;
		new_node->next = NULL;
	}
	else {
		tail->next = new_node;
		tail = new_node;
		new_node->next = NULL;
	}

}
void linkedlist::delete_node(string username, string password)
{
	node* curr, *prev;
	curr = prev = head;
	while (curr->account.get_username () != username)
	{
		prev = curr;
		curr = curr->next;
	}
	prev->next = curr->next;
	delete curr;
}

Account * linkedlist::find(string username, string password)
{
		node* curr = head;
		while (curr!= NULL) {
			if (curr->account.get_username() == username) {
				if (curr->account.get_password() == password) {
					return &(curr->account);
				}
				else {
					return NULL;
				}
			}
			curr = curr->next;
		}
		return NULL;
	}

