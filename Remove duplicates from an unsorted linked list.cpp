Node * removeDuplicates( Node *head) 
    {
     // your code goes here
     unordered_map<int, int> mp;
        Node* temp = head;
        Node* prev = head;
        while(temp!=NULL)
        {
            if (mp.find(temp->data)!=mp.end())
            {
                if (prev->next!=NULL) prev->next = temp->next;
                else 
                {
                    prev->next = NULL;
                }
                temp->next = NULL;
                temp = prev->next;
            }
            else
            {
                mp[temp->data]++;
                prev = temp;
                temp = temp->next;
            }
        }
        
        return head;
    }
