class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        reverse(digits.begin(),digits.end());
        int i = 0 ;
        bool flag = false ;
        while(true){
            if(i==n-1 && digits[n-1]==9){
                digits[n-1] = 0 ;
                flag = true ;
                break ; 
            }
            digits[i]++;
            if(digits[i]==10){
                digits[i] = 0 ;
                i++;
            }else{
                break;
            }
        }
        if(flag==true){
            digits.push_back(1);
        }
        reverse(digits.begin(),digits.end());
        return digits ;
    }
};
