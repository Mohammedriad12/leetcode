class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>result;

        for(int i = left; i <= right; i++){
           int n = i;
           bool dividable = true;

           while(n){
            int digit = n % 10;
            
            if(digit == 0 || i % digit){
                dividable = false;
                break;
            }
            n /= 10;
           } 
           if (dividable) result.push_back(i);
        }
        return result;
    }
};