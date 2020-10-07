SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {
    SinglyLinkedListNode* preNode = NULL;
    SinglyLinkedListNode* currNode = head;
    SinglyLinkedListNode* nextNode = NULL;
    
    while (currNode != NULL) {
        nextNode = currNode->next;
        currNode->next = preNode;
        preNode = currNode;
        currNode = nextNode;
    }
    
    head = preNode;
    
    return head;
}