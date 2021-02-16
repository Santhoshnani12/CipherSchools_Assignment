#include<bits/stdc++.h>
using namespace std;


void printAlllDecoing(string number, string output) {

        if(number.length() == 0) {
            cout<<output<<endl;
            return;
        }

        string firstCharacter = number.substr(0,1);


        int firstNumber = std::stoi(firstCharacter);  

        if(firstNumber != 0) {
            char character = (char)('a' + firstNumber - 1);
            printAlllDecoing(number.substr(1), output + character);
        }

        if(number.length() <= 1) {
            return;
        }

        string firstTwoCharacters = number.substr(0,2);


        int firstTwoNumber = std::stoi(firstTwoCharacters);


        if(firstTwoNumber <= 26) {
            char character = (char)('a' + firstTwoNumber - 1);
            printAlllDecoing(number.substr(2), output + character);
        }


    }

    int main() {

        printAlllDecoing("121", "");
    }

