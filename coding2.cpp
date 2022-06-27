#include <string>
#include <vector>
#include <iostream>

using namespace std;
//[카카오인턴] 키패드 누르기 level1
string solution(vector<int> numbers, string hand) {
    string answer = "";
    int l_pos = 10;
    int r_pos = 11;
    int l_dis = 0;
    int r_dis = 0;
    
    vector<int>::iterator iter = numbers.begin();
    
    for(; iter != numbers.end(); iter++){
        if (*iter == 1 || *iter == 4 || *iter == 7){
            answer.append("L"); l_pos = *iter;
        }
        else if (*iter == 3 || *iter == 6 || *iter == 9){
            answer.append("R"); r_pos = *iter;
        }
        else if(*iter == 2){
            if(l_pos == 1) l_dis = 1;
            else if(l_pos == 2) l_dis = 0;
            else if(l_pos == 4) l_dis = 2;
            else if(l_pos == 5) l_dis = 1;
            else if(l_pos == 7) l_dis = 3;
            else if(l_pos == 8) l_dis = 2;
            else if(l_pos == 0) l_dis = 3;
            else if(l_pos == 10) l_dis = 4;
            
            if(r_pos == 3) r_dis = 1;
            else if(r_pos == 6) r_dis = 2;
            else if(r_pos == 9) r_dis = 3;
            else if(r_pos == 2) r_dis = 0;
            else if(r_pos == 5) r_dis = 1;
            else if(r_pos == 8) r_dis = 2;
            else if(r_pos == 0) r_dis = 3;
            else if(r_pos == 11) r_dis = 4;
            
            
            if(l_dis > r_dis) {answer.append("R"); r_pos = *iter;}
            else if(l_dis < r_dis) {answer.append("L"); l_pos = *iter;}
            else if(l_dis == r_dis) {
                if(hand == "left") {answer.append("L"); l_pos = *iter;}
                else if(hand == "right") {answer.append("R"); r_pos = *iter;}
            }
        }
        else if(*iter == 5){
            if(l_pos == 1) l_dis = 2;
            else if(l_pos == 4) l_dis = 1;
            else if(l_pos == 7) l_dis = 2;
            else if(l_pos == 2) l_dis = 1;
            else if(l_pos == 5) l_dis = 0;
            else if(l_pos == 8) l_dis = 1;
            else if(l_pos == 0) l_dis = 2;
            else if(l_pos == 10) l_dis = 3;
            
            if(r_pos == 3) r_dis = 2;
            else if(r_pos == 6) r_dis = 1;
            else if(r_pos == 9) r_dis = 2;
            else if(r_pos == 2) r_dis = 1;
            else if(r_pos == 5) r_dis = 0;
            else if(r_pos == 8) r_dis = 2;
            else if(r_pos == 0) r_dis = 3;
            else if(r_pos == 11) r_dis = 3;
            
            if(l_dis > r_dis) {answer.append("R"); r_pos = *iter;}
            else if(l_dis < r_dis) {answer.append("L"); l_pos = *iter;}
            else if(l_dis == r_dis) {
                if(hand == "left") {answer.append("L"); l_pos = *iter;}
                else if(hand == "right") {answer.append("R"); r_pos = *iter;}
            }
        }
        else if(*iter == 8){
            if(l_pos == 1) l_dis = 3;
            else if(l_pos == 4) l_dis = 2;
            else if(l_pos == 7) l_dis = 1;
            else if(l_pos == 2) l_dis = 2;
            else if(l_pos == 5) l_dis = 1;
            else if(l_pos == 8) l_dis = 0;
            else if(l_pos == 0) l_dis = 1;
            else if(l_pos == 10) l_dis = 2;
            
            if(r_pos == 3) r_dis = 3;
            else if(r_pos == 6) r_dis = 2;
            else if(r_pos == 9) r_dis = 1;
            else if(r_pos == 2) r_dis = 2;
            else if(r_pos == 5) r_dis = 1;
            else if(r_pos == 8) r_dis = 0;
            else if(r_pos == 0) r_dis = 1;
            else if(r_pos == 11) r_dis = 2;
            
            if(l_dis > r_dis) {answer.append("R"); r_pos = *iter;}
            else if(l_dis < r_dis) {answer.append("L"); l_pos = *iter;}
            else if(l_dis == r_dis) {
                if(hand == "left") {answer.append("L"); l_pos = *iter;}
                else if(hand == "right") {answer.append("R"); r_pos = *iter;}
            }
        }
        else if(*iter == 0){
            if(l_pos == 1) l_dis = 4;
            else if(l_pos == 4) l_dis = 3;
            else if(l_pos == 7) l_dis = 2;
            else if(l_pos == 2) l_dis = 3;
            else if(l_pos == 5) l_dis = 2;
            else if(l_pos == 8) l_dis = 1;
            else if(l_pos == 0) l_dis = 0;
            else if(l_pos == 10) l_dis = 1;
            
            if(r_pos == 3) r_dis = 4;
            else if(r_pos == 6) r_dis = 3;
            else if(r_pos == 9) r_dis = 2;
            else if(r_pos == 2) r_dis = 3;
            else if(r_pos == 5) r_dis = 2;
            else if(r_pos == 8) r_dis = 1;
            else if(r_pos == 0) r_dis = 0;
            else if(r_pos == 11) r_dis = 1;
            
            if(l_dis > r_dis) {answer.append("R"); r_pos = *iter;}
            else if(l_dis < r_dis) {answer.append("L"); l_pos = *iter;}
            else if(l_dis == r_dis) {
                if(hand == "left") {answer.append("L"); l_pos = *iter;}
                else if(hand == "right") {answer.append("R"); r_pos = *iter;}
            }
        }
    }
    
    return answer;
}