 struct Node* makeUnion(struct Node* head1, struct Node* head2)
    {
        set<int> st;
        while(head1)
        {
            st.insert(head1->data);
            head1=head1->next;
        }
        while(head2)
        {
            st.insert(head2->data);
            head2=head2->next;
        }
        Node*ans=new Node(-1);
        Node*ptr=ans;
        for(auto x:st){
            Node*temp=new Node(x);
            ptr->next=temp;
            ptr=temp;
        }
        return ans->next;
        // code here
    }
