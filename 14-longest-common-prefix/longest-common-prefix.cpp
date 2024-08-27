#include <cstring>
#include <string>
class Solution {
public:

    // // function to split the  word into an array 
    // char* split(string& str){
    //     char* arr = new char[str.size()+1];
    //     strcpy(arr, str.c_str()); 
    //     return arr;
    // }
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = "";

        // return "" if nothing
        if(strs.empty()){
            return prefix; 
        }

        // sort based on alphabetical order
        sort(strs.begin(), strs.end());

        // store first and last values 
        string first = strs[0];
        string last = strs[strs.size() - 1];

        // take the one that is minimum size
        int minWord = min(first.size(), last.size());

        for(int i = 0; i<minWord;i++){
            if(first[i] == last[i]){ // compare each character
                prefix += first[i]; // append if it the characters are the same 
            }
            else{
                break;
            }
        }

        return prefix;
    }
};