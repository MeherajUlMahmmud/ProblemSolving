SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    if(head1 == NULL) return head2;
    if(head2 == NULL) return head1;

    SinglyLinkedListNode* result = new SinglyLinkedListNode(-1);
    SinglyLinkedListNode* cur = result;
    while(head1 != NULL && head2 != NULL) {
        if(head1->data < head2->data) {
            cur->next = head1;
            head1 = head1->next;
        } else {
            cur->next = head2;
            head2 = head2->next;
        }
        cur = cur->next;
    }

    if(head1 != NULL) cur->next = head1;
    if(head2 != NULL) cur->next = head2;

    return result->next;
}