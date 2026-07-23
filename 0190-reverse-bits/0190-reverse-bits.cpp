class Solution {
public:
    int reverseBits(int n) {
        string bits="";
        while(n>0)
        {
            bits.push_back(n%2 + '0');
            n/=2;
        }
        while(bits.size()<32)
            bits.push_back('0');
        int ans=stoi(bits,nullptr,2);
        return ans;
    }
};