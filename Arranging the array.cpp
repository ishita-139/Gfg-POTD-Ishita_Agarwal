//You are given an array of size N. Rearrange the given array in-place such that all the negative numbers occur before all non-nagative numbers.(Maintain the order of all -ve and non-negative numbers as given in the original array).
void Rearrange(int arr[], int n)
        {
            vector <int> x;
            vector <int> y;
            int b[n];
            for (int i=0;i<n;i++)
            {
                if (arr[i]<0)
                {
                    x.push_back(arr[i]);
                }
                else
                {
                    y.push_back(arr[i]);
                }
            }
            int j=0;
            for (auto q:x)
            {
                b[j]=q;
                j++;
            }
            for (auto q:y)
            {
                b[j]=q;
                j++;
            }
            for (int i=0;i<n;i++)
            {
                arr[i]=b[i];
            }
            // Your code goes here
        }
