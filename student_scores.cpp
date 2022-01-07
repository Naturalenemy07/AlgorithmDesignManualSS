#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

//My code
class Student {
    private:
        vector<int> scores;
        
    public:
        void input() {
            int temp_score;
            //hard coded to accept 5 scores per problem statement
            for(int i =0; i < 5; i++) {
                cin >> temp_score;
                scores.push_back(temp_score);
            }
        }
        
        int calculateTotalScore() {
            int sum_score = 0;
            for(vector<int>::size_type j = 0; j != scores.size(); j++) {
                sum_score += scores[j];
            }
            return sum_score;
        }
};

//HR code
int main() {
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;
    
    return 0;
}
