#include <iostream> 
#include <cassert>
#include "argumentmanager.h"
#include <vector>
#include <fstream> 
using namespace std; 

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result; 
        for (int i = 0; i<nums.size(); i++) { 
            for (int j = i+1; j<nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                }
            }
        
        }
        return result; 
    }
};



int main(int argc, char* argv[]){
    if (argc < 2) {
    cout << "Usage: ./main \"input=<file>;output=<file>\"" << std::endl;
    return -1;
  }
    ArgumentManager am(argc, argv);
    ifstream in(am.get("input"));
    ofstream out(am.get("output"));

   // Solution e;
   // vector<int> test_array = {2,7,11,15}; 
   // int target = 9; 
    //vector<int> result = e.twoSum(test_array,target); 
    //assert(target == 9);

    //read input file 
    //parse it 
    //store it in correct vars 
    //and then write to outputfile 
    //shell script will test outputs 
    string line; 
    string delim = "="; 
    string delim2 = "[";
    string target = ""; 
    string numbers ="";
    while (getline(in,line))
    { 
        int pos = line.find(delim);
        if (pos != string::npos) { // Check if delimiter exists in the line
            target = line.substr(pos+1);
        }
        int pos2 = line.find(delim2);
         if (pos2 != string::npos) { 
        numbers = line.substr(pos+2, line.find("]")-1); 
        cout <<numbers<< endl; }
    }


    return 0; 
}