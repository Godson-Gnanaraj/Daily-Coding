#include <bits/stdc++.h>
#include "xor_llist.h"

using namespace std;

int main()
{
	XorLinkedList xorllist;

	xorllist.add(3);
	xorllist.add(1);
	xorllist.add(7);

	int idx = 3;
	try {
		Node *node = xorllist.get(idx);
		cout << node->data << endl;
	}
	catch (int e){
		cout << "Element not found at given index "<< idx << endl;
	}

	xorllist.printlist();
}
