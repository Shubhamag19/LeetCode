class Solution {
public:
    vector<int> plusOne(vector<int>& A) {
        vector<int> B(A.size()+1);
        int last = A.size()-1;
        int carry = 1;
        for(int i=0; i<A.size(); i++){
            B[i] = A[last]+carry;
            last--;
            carry = 0;
            if(B[i]==10){
                B[i] = 0;
                carry = 1;
                if(last==-1){
                    B[i+1]=1;
                }
            }
        }
        int start=0;
        int value=0;
        int end=B.size()-1;
        while(value==0){
            if(B[end]==0){
                end--;
                start++;
            }
            else{
                value++;
            }
        }
        vector<int> C(B.size()-start);
        for(int t=0; t<C.size(); t++){
            C[t] = B[B.size()-start-t-1];
        }
        return C;
    }
};
