class Solution {
public:
    
    int kConcatenationMaxSum(vector<int>& arr, int k){
        int n = arr.size(), sum = arr[0], msum = arr[0];
        long total = accumulate(arr.begin(), arr.end(), 0), mod = pow(10, 9)+7;
        for (int i = 1; i < n * min(k, 2); i++) {
            sum = max(arr[i % n], sum + arr[i % n]);
            msum = max(msum, sum);
        }
        return max<long long>({0, msum, total * max(0, k - 2) + msum}) % mod;
    }
    
    /*
    int mod = pow(10, 9) + 7;
    int kadane(vector<int>& arr){
        int curr = arr[0];
        int msum = arr[0];
        for(int i = 0; i < arr.size(); i++){
            if(curr >= 0){
                curr += arr[i];
            }
            else{
                curr = arr[i];
            }
            if(curr > msum){
                msum = curr;
            }
        }
        return (long long)msum % mod;
    }
    
    int kadaneTwo(vector<int>& arr){
        vector<int> narr(2 * arr.size());
        for(int i = 0; i < arr.size(); i++){
            narr[i] = arr[i];
        }
        for(int i = 0; i < arr.size(); i++){
            narr[i + arr.size()] = arr[i];
        }
        return (long long)kadane(narr) % mod;
    }
    
    int kConcatenationMaxSum(vector<int>& arr, int k) {
        int sum = 0;
        for(auto it : arr){
            sum += it;
        }
        if(k == 1){
            return (long long)kadane(arr) % mod;
        }
        else if(sum < 0){
            return (long long)kadaneTwo(arr) % mod;
        }
        else{
            return (long long)(kadaneTwo(arr) + (k - 2) * sum) % mod;
        }
    }*/
};