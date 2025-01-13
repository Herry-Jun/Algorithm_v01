#include <string>
#include <vector>

using namespace std;

int solution(const string s) {
    int sign = 1;
    int answer = 0;
    int startIndex = 0;
    
    if (s[0] == '-') {
        sign = -1;
        startIndex = 1;
    }
    else if (s[0] == '+') {
        startIndex = 1;
    }
    
    for(int i = startIndex; i < s.length(); i++) {
        char c = s[i];
        
        if (c >= '0' && c <= '9') {
            answer = answer * 10 + (c - '0');
        }
        else {
            return 0;
        } 
    }
    return answer * sign;
}