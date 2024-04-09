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
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		Node* temp = new Node(x);
		if(head==NULL){
			head=temp;
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

//	Node* temp1 = new Node(10);
//	Node* temp2 = new Node(20);
//	Node* temp3 = new Node(30);
//	Node* temp4 = new Node(40);
//	Node* temp5 = new Node(50);
//	temp1->next=temp2;
//	temp2->next=temp3;
//	temp3->next=temp4;
//	temp4->next=temp5;
//	Node* t1=temp1;

//									begin
//	Node* x=new Node(5);
//	x->next=t1;
//	while(x!=NULL){
//		cout<<x->data<<" ";
//		x=x->next;
//	}

//									end
//	Node* x=new Node(55);
//	while(temp1->next!=NULL)
//	{
//		temp1=temp1->next;
//		
//	}
//	temp1->next=x;

//								middle
//	Node* x=new Node(25)
//	int pos=3;
//	while(pos-2>0){
//		t1=t1->next;
//		pos-=1;
//	}
//	Node* t2=t1->next;
//	t1->next=x;
//	x->next=t2;

			//delete at ending
//while(t1->next->next!=NULL)
//{
//	t1=t1->next;
//}
//t1->next=NULL;

//         delete at begin
//temp1=temp1->next;
//
//Node* t2=t1->next->next;
//t1->next=NULL;
//t1->next=t2;

while(temp1!=NULL){
		cout<<temp1->data<<" ";
		temp1=temp1->next;
	}
}
