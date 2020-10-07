SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
	SinglyLinkedListNode* temp = new SinglyLinkedListNode(data);

    if (head == NULL) 
        return temp;

    SinglyLinkedListNode* cur = head;
    while(cur->next != NULL) {
        cur = cur->next;
    }
    cur->next = temp;
    return head;
}