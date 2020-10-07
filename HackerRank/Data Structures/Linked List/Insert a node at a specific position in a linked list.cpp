SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
    SinglyLinkedListNode* temp = new SinglyLinkedListNode(data);
    SinglyLinkedListNode* cur = head;
    int count = 0;
    while(count != position - 1) {
        cur = cur->next;
        count++;
    }
    temp->next = cur->next;
    cur->next = temp;

    return head;
}