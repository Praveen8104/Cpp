#include<bits/stdc++.h>
using namespace std;
class Node{
	public:
	int data;
	Node* next;
	Node(int data){
		this->data =  data;
		this->next = NULL;
	}
};
int main()
{
	Node* temp1=new Node(10);
	Node* temp2=new Node(20);
	Node* temp3=new Node(30);
	Node* temp4=new Node(40);
	temp1->next=temp2;
	temp2->next=temp3;
	temp3->next=temp4;
	cout<<temp1->next<<" ";
	while(temp1!=NULL)
	{
		cout<<temp1->data<<" ";	
		temp1=temp1->next;
	}
	
}
