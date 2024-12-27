#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    
    int answer = 0;
    
    for(int num : arr) {
        answer += num;
    }
    return (double)answer / arr.size();
}