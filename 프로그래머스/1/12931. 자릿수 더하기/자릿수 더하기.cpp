#include <iostream>

using namespace std;
int solution(int n)
{
    
    int answer = 0;
    
    while (n > 0) {
        answer += n % 10;  // N의 마지막 자릿수 구하기
        n /= 10;
    }

    return answer;
}