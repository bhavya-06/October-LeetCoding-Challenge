//K-diff Pairs in an Array

class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int n = nums.size();
        
        unordered_map<int,int>m;
        
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        
        int cnt = 0;
        
        if(k==0){
            for(auto it = m.begin();it != m.end(); it++){
                if(it->second >= 2){
                    cnt++;
                }
            }
        }
        else{
            for(auto it = m.begin();it != m.end(); it++){
                if(m.find(it->first + k) != m.end()){
                    cnt++;
                }
            }
        }
        
        return cnt;
        
    }
        
        
};
