// Solution 1:

class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> res;
        for(int i=0;i<boxes.size();i++){
            int sum = 0;
            for(int j=0;j<boxes.size();j++){
                if(i==j && j=='0'){
                    continue;
                }
                if(boxes[j]=='1'){
                    sum = sum + (abs(i-j));
                }
            }
            res.push_back(sum);
        }
        return res;
        
    }
};

// Solution 2: (Understood the math but not the logic)

class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        vector<int> res(n,0);
        int balls = 0, ops = 0;
        for(int i=0;i<n;i++){
            res[i] +=ops;
            if(boxes[i]=='1'){
                balls++;
            }
            ops+= balls;
        }
        balls = 0, ops = 0;
        for(int i=n-1;i>=0;i--){
            res[i] += ops;
            if(boxes[i] == '1'){
                balls++;
            }
            ops += balls;
        }
        return res;
    }
};

// Solution 3: (Leetcode Editorial)

class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        vector<int> answer(n, 0);

        int ballsToLeft = 0, movesToLeft = 0;
        int ballsToRight = 0, movesToRight = 0;

        // Single pass: calculate moves from both left and right
        for (int i = 0; i < n; i++) {
            // Left pass
            answer[i] += movesToLeft;
            ballsToLeft += boxes[i] - '0';
            movesToLeft += ballsToLeft;

            // Right pass
            int j = n - 1 - i;
            answer[j] += movesToRight;
            ballsToRight += boxes[j] - '0';
            movesToRight += ballsToRight;
        }

        return answer;
    }
};
