SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
    SinglyLinkedListNode* temp = new SinglyLinkedListNode(data);

    if (llist == NULL) 
        return temp;

    temp->next = llist;
    return temp;
}