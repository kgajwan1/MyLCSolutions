//LC 412. Fizz Buzz

class Solution {
public:
    vector<string> fizzBuzz(int n) {
    vector<string> result;
       
        for (int i = 1; i <= n; i++) {
             bool fizz = i%3==0;
             bool buzz = i%5==0;
            if (fizz && buzz) {
                result.push_back("FizzBuzz");
            }
            else if (fizz) {
                result.push_back("Fizz");
            }
            else if (buzz) {
                result.push_back("Buzz");
            }
            else {
                result.push_back(to_string(i));
            }
        }
        return result;
    }
};