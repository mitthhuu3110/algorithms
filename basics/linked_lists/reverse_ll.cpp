// basic leetcode operations 

struct Node {
    int val;
    Node *next;
    Node() : val(0), next(nullptr) {}
    Node(int x) : val(x), next(nullptr) {}
    Node(int x, Node *next) : val(x), next(next) {}
};

// reverse a linked list
#include <bits/stdc++.h>

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
