#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2) {
    
    int answer = (str1.find(str2) == string::npos)?2:1;
    
    return answer;
}