// Solution 1

/*
class Solution {
public:
    string removeOccurrences(string s, string part) {
        int l = s.length();
        for(int j=0;j<l;j++){
            string::size_type i = s.find(part);
            if(i != string::npos){
                s.erase(i, part.length());
            }
        }
        return s;
    }
};
*/

// Solution 2

// little less optimized(see submission)
/*
class Solution {
public:
    string removeOccurrences(string s, string part) {
        //int l = s.length();
        for(int j=0;j<1000;j++){
            string::size_type i = s.find(part);
            if(i != string::npos){
                s.erase(i, part.length());
            }
        }
        return s;
    }
};
*/

// solution 3

// better optimized (see submission)

class Solution {
public:
    string removeOccurrences(string s, string part) {
        //int l = s.length();
        while(s.length()!=0 && s.find(part) < s.length()){
            s.erase(s.find(part), part.length());
        }
        return s;
    }
};
