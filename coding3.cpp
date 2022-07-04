#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    vector<int> a;
    
    for(int i=0; i<arr1.size(); i++){
        for(int j=0; j<arr1[i].size(); j++){
            a.push_back(arr1[i][j] + arr2[i][j]);
        }
        answer.push_back(a);
        a.clear();
    }
    
    return answer;
}

/*
vector<int>::iterator i1 = arr1.begin();
vector<int>::iterator i2 = arr2.begin();

for(; i1 != arr1.end(); i1++){
    for(vector<int> iterator i1_1 = i1->begin(); i1_1 != i1 -> end(); i1_1++)
    *i1_1 = *i1 + *i2; 이런 방법도 있다...제대로 하려면 더 복잡해지긴함
}
*/