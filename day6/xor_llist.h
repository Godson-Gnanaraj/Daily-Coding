class Node {
 public:
	int data;
	Node *both;
	Node(int x) {
		data = x;
		both=nullptr;
	}
};

class XorLinkedList {
 public:
	void add(int data);
	Node* get(int idx);
	void printlist();
	XorLinkedList();
 private:
	Node* head;
	Node* XOR(Node *a, Node *b);
};
