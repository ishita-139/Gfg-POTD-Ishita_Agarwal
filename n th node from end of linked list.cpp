/*Given a linked list consisting of L nodes and given a number N. The task is to find the Nth node from the end of the linked list.*/
int getNthFromLast(Node *head, int n)
    {
        Node* temp=head;
        Node* ans=head;//
        int c=0;
        while(temp)
        {
            temp=temp->next;
            c++;
            
        }
        if (c<n)
        {
            return -1;
        }
        else
        {
            int x=c-n;
            while(x--)
            {
                ans=ans->next;
            }
            return ans->data;
        }
           // Your code here
    }
