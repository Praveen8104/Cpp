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
int main()
{
	int n;
	cin>>n;
	Node* head = NULL;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		Node* temp = new Node(x);
		if(head==NULL){
			head = temp;
		}
		else{
			Node* current = head;
			while(current->next!=NULL){
				current=current->next;
			}
			current->next=temp;
		}
	}
	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next;
	}	
}
