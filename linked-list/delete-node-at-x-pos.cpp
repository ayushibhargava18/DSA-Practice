/*
class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
        // code here
        Node* temp=head;
        Node* temp2=NULL;
        
        if(x==1){
            head=temp->next;
            delete temp;
            return head;
        }
        
        int i=0;
        while(i!=x-1){
            temp2=temp;
            temp=temp->next;
            i++;
            
            if(temp==NULL){
                return head;
            }
        }
        temp2->next=temp->next;
        delete temp;
        return head;
    }
};
