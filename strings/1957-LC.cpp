#include<bits/stdc++.h>
using namespace std;

/*
*   Challenges: When I was iterating over the string I was changing that particular string, eventually which was affecting in terms of
                while iterating over it. Specifically, when you I was using s.erase(i, 1), the length of the string decreases, which can cause 
                you to skip checking some characters, leading to incorrect results.
*   Solution: So when above issue occured I created another variable called result which will be appending all the time until current count 
                reaches count 3 if it reaches count 3 I skip that character to be appended towards result string.

    Approach: I have created 3 variables 1st result, 2nd holding current_character (initialised with null char), 3rd current count to 0
                which will be holding current character count, After that I started Iterating over the string which will be checking
                    Case 1: if current character is same as iterated character (s[i]), If yes the increase current character count with 1.
                    Case 2: If Not, then re-initialize current character with the iterated character (s[i]) and update current character count
                            to 1.
                    Case 3: If current character count is smaller then 3 then append all the iterated character (s[i]) to result in every iterations.
*/


class Solution {
public:
    string makeFancyString(string s) {
        string result; 
        char current_char = '\0';
        int current_count = 0;
        for(int i=0; i<s.length(); i++) {
            if(current_char == s[i]) {
                current_count++;
            }
            else {
                current_char = s[i];
                current_count = 1;
            }

            if(current_count < 3) {
                result += s[i];
            }
        }

        return result;
    }
};