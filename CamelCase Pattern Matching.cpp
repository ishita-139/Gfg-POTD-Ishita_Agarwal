/* Given a dictionary of words where each word follows CamelCase notation, print all words (in lexicographical order) in the dictionary that match with a given pattern consisting of uppercase characters only.
Example: GeeksForGeeks matches the pattern "GFG", because if we combine all the capital letters in GeeksForGeeks they become GFG.
CamelCase is the practice of writing compound words or phrases such that each word or abbreviation begins with a capital letter. Common examples include PowerPoint and Wikipedia, GeeksForGeeks, CodeBlocks, etc.
*/
vector<string> CamelCase(int N, vector<string> Dictionary, string Pattern) {
        vector <string>ans;
        for (auto x: Dictionary)
        {
            int a=0;
            for (int i=0;i<x.length();i++)
            {
                if (x[i]==Pattern[a])
                {
                    a++;
                }
                else if (isupper(x[i]))
                {
                    break;
                }
            }
            if (a==Pattern.size())
            {
                ans.push_back(x);
            }
        }
        if (ans.size()==0)
        {
            ans.push_back("-1");
        }
        return ans;
        
        // code here
    }
