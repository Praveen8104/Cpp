#include<bits/stdc++.h>
using namespace std;
class Node{
	public:
	int data;
	Node* next;
	Node(int data){
		this->data=data;
		this->next=NULL;
	}
};
int main(){
	int n;
	cin>>n;
	Node* head  = NULL;
	Node* node;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		Node* temp = new Node(x);
		if(head==NULL){
			head=temp;
			node=head;
		}
		else{
			node->next=temp;
			node=node->next;
		}
	}
	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next;
	}
}
