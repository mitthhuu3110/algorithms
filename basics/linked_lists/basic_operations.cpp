// linkedlist declaration

struct Node {
	int data;
	Node* next;
	
	//constructor for the Node
	Node(int val) : data(val) , next(nullptr) {}
};


// insertion at the beginning 

void insertAtBegin(Node* head, int val){
	Node* newNode = new Node(val);
	newNode -> next = head;
	head = newNode;
}

// insertion at the end

void insertAtEnd(Node* head, int val){
	Node* newNode = new Node(val);
	if(!head){
		head = newNode;
		return;
	}
	
	Node* temp = head;
	while(temp -> next){
		temp = temp -> next;
	}
	temp -> next = newNode;
}


// searching for a node with value val

bool isFound(Node* head, int val){
	Node* temp = head;
	while(temp){
		if(temp -> data == val) return true;
		temp = temp -> next;
	}
	return false;
}

// node traversal & printing the entire linked list

void traverse(Node* head){
	Node* temp = head;
	while(temp){
		cout << temp -> data << "->";
		temp = temp -> next;
	}
	cout << nullptr << endl;
}

// deletion 


// -- placeholder for deletion of the node in a linkedlist by value -- 
