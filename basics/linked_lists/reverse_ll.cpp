// coming soon


// reverse a linked list

Node* reverseLL(Node* head){
	Node* prev = nullptr;
	Node* curr = head;
	
	while(Node && Node -> next){
		Node* forward = head -> next;
		curr -> next = prev;
		prev = curr;
		curr = forward;
	}
	
	return prev;
}
