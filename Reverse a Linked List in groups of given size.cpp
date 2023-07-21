struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        node *prev=NULL;
        node *nxt=NULL;
        int count=0;
        node *curr=head;
        if(head==NULL)
        return NULL;
        while(curr!=NULL && count<k){
            nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
            count++;
        }
        if(nxt!=NULL){
            head->next=reverse(nxt,k);
        }
        return prev;
    }
