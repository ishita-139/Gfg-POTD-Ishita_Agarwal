int missingNumber(int arr[], int n) 
    { 
        sort(arr, arr+n);
        int num = 1;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == num) num++;
        }
        return num;
        // Your code here
    } 
