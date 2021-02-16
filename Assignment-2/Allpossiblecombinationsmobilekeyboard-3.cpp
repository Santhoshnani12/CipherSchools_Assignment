#include<bits/stdc++.h>
using namespace std;



string getValue(char c) {

        if (c == '2') {
            return "abc";
        }
        if (c == '3') {
            return "def";
        }
        if(c == '4') {
            return "ghi";
        }
        if (c == '5') {
            return "jkl";
        }
        if (c == '6') {
            return "mno";
        }
        if(c == '7') {
            return "pqrs";
        }
        if (c == '8') {
            return "tuv";
        }
        if (c == '9') {
            return "wxyz";
        }

        return "";
    }


    vector<string> getAllCombinations(string input) { //2

        if(input.length() == 0) {

            vector<string> emptyList;
            emptyList.push_back("");
            return emptyList;
        }

        string firstCharacterValue = getValue(input[0]); //def

        vector<string> smallerproblemCombinations = getAllCombinations(input.substr(1)); // empty

        vector<string> ans;

        //n
        for(int i = 0; i < firstCharacterValue.length(); i++) {
            for(int j = 0; j < smallerproblemCombinations.size(); j++) {
                string output = firstCharacterValue[i] + smallerproblemCombinations[j];
                ans.push_back(output);
            }
        }
        return  ans;
    }


    int main() {

        vector<string>  ans = getAllCombinations("123");


        for(auto s : ans) {
            cout<<s;
        }
    }
