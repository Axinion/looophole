// Python solution

class Solution:
    def fizzBuzz(self, n: int) -> List[str]:
        a = []
        for i in range(1, n+1):
            if i%3==0 and i%5==0:
                a.append("FizzBuzz")
            elif(i%3==0):
                a.append("Fizz")
            elif(i%5==0):
                a.append("Buzz")
            else:
                a.append(str(i))
        return a

// CPP Solution

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans;
        
        for(int i=1; i<=n; i++){
            if(i%3 == 0 && i%5==0){
                ans.push_back("FizzBuzz");
            }
            else if(i%3==0) ans.push_back( "Fizz");
            else if(i%5==0) ans.push_back("Buzz");
            else ans.push_back(to_string(i));
        }
        return ans;
    }
};

