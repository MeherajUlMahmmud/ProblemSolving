SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) {
    SinglyLinkedListNode* cur = head;
    while(cur->next != NULL) {
        if(cur->data == cur->next->data) {
            SinglyLinkedListNode* del = new SinglyLinkedListNode(cur->next->data);
            cur->next = cur->next->next;
            free(del);
        } else {
            cur = cur->next;
        }
    }
    return head;
}