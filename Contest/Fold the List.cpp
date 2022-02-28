#include<bits/stdc++.h>
using namespace std;

#include<bits/stdc++.h>
using namespace std;

class List{

public:
	int data;
	List* next;
	
	List(int val){
		data = val;
		next = NULL;
	}
};


List* create(List* head){

	int n;
	cin >> n;

	List* temp = NULL;
	while(n--){
		int val;
		cin >> val;

		List* new_node = new List(val);

		if(head == NULL){
			head = new_node;
			temp = head;
			//temp = head->next;
		}
		else{
			temp->next = new_node;
			temp = temp->next;
		}
	}

	return head;
}


void traverse(List* head){

	while(head!= NULL){
		//cout << "YES";
		cout << head->data << " ";
		head = head->next;
	}

}


List* mid_point(List* head){

	List* fast = head;
	List* slow = head;

	List* head2 = head;
	while(slow != NULL && fast->next != NULL){
		fast = fast->next->next;
		slow = slow->next;
	}
	
	while(head->next != slow){
		
	}

}


List* reverseLL(List* head)
{
	 List* current = head;
        List *prev = NULL, *next = NULL;
  
        while (current != NULL) {
            // Store next
            next = current->next;
  
            // Reverse current node's pointer
            current->next = prev;
  
            // Move pointers one position ahead.
            prev = current;
            current = next;
        }
        head = prev;
    return head;
}

List* fold(List* head1,List* head2){


}

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	List* root = NULL;
	root = create(root);
	//traverse(root);
	
	List* xt = mid_point(root);
	/*while(xt!=NULL){
		cout << xt->data << " ";
		xt = xt->next;
	}*/

	xt = reverseLL(xt);

	xt = fold(root, )
	traverse(xt);
	return 0;
}