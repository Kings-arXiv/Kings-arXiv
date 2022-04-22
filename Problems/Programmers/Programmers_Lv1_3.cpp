#include <string>
#include <vector>

// Programmers 코딩테스트 LV.1: 행렬의 덧셈

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    
    vector<vector<int>> answer;
    vector<int> row;
    
    int row_size = arr1.size();
    int col_size = arr1[0].size();
    
    int i;
    int j;
    
    for (i = 0; i < row_size; i++){
        answer.push_back(row);
        for (j = 0; j < col_size; j++){
            answer[i].push_back(arr1[i][j] + arr2[i][j]);
        }
    }
    return answer;
}