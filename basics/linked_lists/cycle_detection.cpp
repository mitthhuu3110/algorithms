// linked list cycle detection 

bool hasCycle(Node* head){
	// method 1 using hashing - maps
	unordered_map<Node*, int> ump;
	Node* temp = head;
	while(temp){
		if(ump.find(temp) != ump.end()){
			return true;
		}
		ump[temp] = 1;
		temp = temp -> next;
	}
	return false;
}

bool hasCycle(Node* head){
	// method 2 using fast and slow pointers 
	Node* fast = head;
	Node* slow = head;
	
	while(fast != NULL && fast -> next != NULL){
		slow = slow -> next;
		fast = fast -> next -> next;
		if(fast == slow) return true;
	}	
	
	return false;
	
}
