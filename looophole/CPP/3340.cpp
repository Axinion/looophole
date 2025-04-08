class Solution {
public:
    bool isBalanced(string num) {
        int sume = 0;
        int sumo = 0;
        for(int i=0;i<num.size();i++){
            if(i%2==0){
                sume = sume + (num[i] - '0');
            }
            else{
                sumo = sumo + (num[i] - '0');
            }
        }
        if(sume!=sumo){
            return false;
        }
        return true;
    }
};
