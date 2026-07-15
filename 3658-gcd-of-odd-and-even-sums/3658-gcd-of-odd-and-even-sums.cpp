class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int evensum=pow(n,2)+n;
        int oddsum=pow(n,2);

        return gcd(oddsum,evensum);
    }
};