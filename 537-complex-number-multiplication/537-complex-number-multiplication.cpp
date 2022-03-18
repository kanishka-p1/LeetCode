class Solution {
public:
    
    pair<int, int> parse(string num){
        int i = num.find('+');
        double real = stoi(num.substr(0, i));
        double imag = stoi(num.substr(i + 1, num.size() - i - 2));
        pair<int, int> res(real, imag);
        return res;
    }
    
    string complexNumberMultiply(string num1, string num2) {
        pair<int, int> x = parse(num1), y = parse(num2);
        int a = x.first, b = x.second;
        int c = y.first, d = y.second;
        
        return to_string(a * c - b * d) + "+" + to_string(a * d + c * b) + "i";
    }
};