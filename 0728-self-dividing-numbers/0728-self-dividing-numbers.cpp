class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>result;
        for (int i = left; i <= right; i++){
            int n = i;
            bool x = true;
            while(n){
                int d = n % 10;
                if(d == 0 || i % d){
                x = false;
                break;
            }
                n /= 10; 
            }
            if (x) result.push_back(i);
        }
        return result;
    }
};