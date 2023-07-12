bool isFrequencyUnique(int n, int arr[])
    {
        unordered_map<int, int> freq;
        for(int i=0; i<n; i++) {
            freq[arr[i]]++;
        }
        unordered_set<int> s;
        for(auto itr:freq) {
            if(s.find(itr.second)!=s.end()) {
                return false;
            }
            s.insert(itr.second);
        }
        return true;
    }
