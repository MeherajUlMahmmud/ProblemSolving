SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {
    if(position == 0) {
        head = head->next;
        return head;
    }
    SinglyLinkedListNode* cur = head;
    int count = 0;
    while(count != position - 1) {
        cur = cur->next;
        count++;
    }
    cur->next = cur->next->next;
    return head;
}