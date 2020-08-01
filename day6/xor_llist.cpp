#include <bits/stdc++.h>
#include <inttypes.h>

#include "xor_llist.h"

using namespace std;


XorLinkedList::XorLinkedList()
{
	head = nullptr;
}

Node* XorLinkedList::XOR(Node *a, Node *b)
{
	return (Node*) ((uintptr_t) a ^ (uintptr_t) b);
}


void XorLinkedList::add(int data)
{
	Node *prev, *curr, *next;
	prev = nullptr;
	curr = head;

	Node *new_node = new Node(data);
	if (head == nullptr) {
		head = new_node;
		return;
	}

	while (curr != nullptr) {
		next = XOR(prev, curr->both);
		prev = curr;
		curr = next;
	}

	curr = new_node;
	curr->both = XOR(prev, nullptr);
	prev->both = XOR(curr, prev->both);
}

Node* XorLinkedList::get(int idx)
{
	Node *prev, *curr, *next;
	prev = nullptr;
	curr = head;

	int pos = 0;

	while (curr != nullptr) {
		if (pos == idx)
			return curr;

		next = XOR(prev, curr-> both);
		prev = curr;
		curr = next;
		pos++;
	}
	throw -1;
}

void XorLinkedList::printlist()
{
	Node *prev, *curr, *next;
	prev = nullptr;
	curr = head;

	while (curr != nullptr) {
		printf("%d ", curr->data);
		next = XOR(prev, curr->both);
		prev = curr;
		curr = next;
	}
	printf("\n");
}
