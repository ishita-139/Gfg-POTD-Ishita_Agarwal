 unordered_map<int,int>m;
    // Function to insert element into the queue
    void insert(queue<int> &q, int k){
         q.push(k);
        m[k]++;
        // Your code here
    }
    
    // Function to find frequency of an element
    // return the frequency of k
    int findFrequency(queue<int> &q, int k){
          if(m[k]==0) return -1;
        return m[k];
        // Your code here
    }
