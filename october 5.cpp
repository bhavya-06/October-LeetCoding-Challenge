//  Complement of Base 10 Integer

class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0)    return 1;
        if(n==1)    return 0;
        
        int ans = 0;
        int k=0;
        
        while(n){
            if(n%2 == 0){
                ans += pow(2,k);
            }
            
            k++;
            n = n/2;
        }
        
        return ans;
    }
};


