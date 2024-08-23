#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;


int main() {
    int n_arrays, q_queries;
    vector<vector<int>> double_vec(n_arrays); //double_vec = {{1,5,4},{1,2,8,9,3}}
    vector<int> vector;
    
    cin >> n_arrays >> q_queries; //Read n and m
    
    string line, number;
    for(int i = 0; i <= n_arrays; ++i){
        getline(cin, line);
        stringstream str(line);
        
        while(getline(str, number, ' ')){
            vector.push_back(stoi(number));
        }
        
        double_vec.push_back(vector);
        vector.clear();
    }
    
    //Now we ask the questions.
    int vec, pos;
    for(int i = 0; i < q_queries; ++i){
        cin >> vec >> pos;
        cout << double_vec[vec+1][pos+1] << endl;
    }
    
    return 0;
}