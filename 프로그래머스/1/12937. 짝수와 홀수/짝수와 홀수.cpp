#include <string>
#include <vector>

using namespace std;

string solution(int num) {
    string answer = "";
    if(num % 2 == 0){
        answer = "Even";
    }
    if(num % 2 != 0){
        answer = "Odd";
    }
    
    return answer;
}