class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int n=word.size(),count=0;
        set<string> st;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                st.insert(word.substr(i,j-i+1));
            }
        }

        for(int i=0;i<patterns.size();i++){
            if(st.count(patterns[i]))
                count++;
        }
        return count;
    }
};