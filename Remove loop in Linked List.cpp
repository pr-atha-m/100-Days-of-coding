 // } Driver Code Ends
/*
structure of linked list node:

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
        Node* slow = head;
        Node* fast = head;
        Node* prev = NULL;
       // we will use Floyd’s Cycle finding algorithm.
        do{
            if(fast == NULL || fast->next==NULL){
              // if fast == NULL or fast->next == NULL , that means there is no loop so we simply return.
              return;
            }
           prev = slow;
            fast = fast->next->next;
            slow = slow->next;
            
        }while(slow!=fast);
         slow = head;
        
        if(slow == fast){
            prev -> next = NULL;
            return;
        }
        while(fast->next!=slow->next){
          
            slow = slow->next;
            fast = fast->next;    
        }
        fast -> next = NULL; 
        return;
        
        
    }
};
