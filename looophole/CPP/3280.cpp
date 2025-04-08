class Solution {
public:
    string convertDateToBinary(string date) {
        int year = stoi(date.substr(0,4));
        int month = stoi(date.substr(5,2));
        int day = stoi(date.substr(8,2));

        string yr = toBinary(year);
        string mn = toBinary(month);
        string dy = toBinary(day);

        string res = yr + '-' + mn + '-' + dy;
        return res;
    }

private:
    string toBinary(int num){
        string bin = "";
        while(num>0){
            bin = char('0' + (num%2)) + bin;
            num/= 2;
        }
        return bin.empty() ? "0" : bin;
    }

};
