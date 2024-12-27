#include <string>
#include <vector>

using namespace std;

double solution(vector<int> numbers) {
    
    int answer = 0;
    
    for(int num : numbers) {
        answer += num;
    }
    
    return (double)answer / numbers.size();
}