Node* insert(Node *head, int data) {
	//Complete this method
	Node** curr = &head;
	while(*curr) {
		curr = &((*curr)->next);
	}
	*curr = new Node(data);
	return head;
}