#include <string>
#include <vector>

// Programmers �ڵ��׽�Ʈ LV.1: �ڵ��� ��ȣ ������

using namespace std;

string solution(string phone_number) {
    string answer = "";
    int i;
    int len = phone_number.size();
    
    for (i = 0; i < len - 4; i++){
        answer.push_back('*');
    }
    answer.append(phone_number.substr(len - 4));
    return answer;
}