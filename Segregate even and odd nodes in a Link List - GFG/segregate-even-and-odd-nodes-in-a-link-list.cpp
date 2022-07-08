// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data <<" "; 
        node = node->next; 
    }  
    cout<<"\n";
} 


 // } Driver Code Ends
//User function template for C++

/*
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution{
public:
    Node* divide(int N, Node *head){
        // code here
        vector<int> v;
        Node* temp1 = head;
        Node* temp2 = head;
        Node* temp3 = head;
        while(temp1!=NULL)
        {
            if((temp1->data)%2==0)
            {
                v.push_back(temp1->data);
            }
            temp1 = temp1->next;
        }
        while(temp2!=NULL)
        {
            if((temp2->data)%2!=0)
            {
                v.push_back(temp2->data);
            }
            temp2 = temp2->next;
        }
        int i=0;
        while(temp3!=NULL)
        {
            temp3->data = v[i];
            temp3 = temp3->next;
            i++;
        }
       return head;
    }
};

// { Driver Code Starts.

int main() {
    //code
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int data;
        cin>>data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < N-1; ++i)
        {
            cin>>data;
            tail->next = new Node(data);
            tail = tail->next;
        }
        
        Solution ob;
        Node *ans = ob.divide(N, head);
        printList(ans); 
    }
    return 0;
}
  // } Driver Code Ends