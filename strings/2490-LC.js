/*
*   Solution: There was two cases
            - Given string first character and its last character should be same
            - For every word containing given string should be ended with a letter which will be used in next word
                eg: leetcode exercies sound delightful is circular sentence
            Covering these two cases will solve this question using javascript it was easy to write this code
    
    Approach:
            - First I have created an array which will be containing after splitted(" " using space split sentence) words from a sentence.
            - then, check first case, which is to compare first letter of a given string and last character of given string, if not equal
                return false from here only.
            - If satisfies above case then check second case every letters last character should be equal to next letter, for which iterating
                over a array, and then checking that case if it fails then it will return false from their only.
            - If Everything is good return true as string will be a circular sentence.
            
*/
var isCircularSentence = function(sentence) {
    const arr = sentence.split(" ");
    if(sentence[0] !== sentence[sentence.length - 1]){
        return false;
    }
    for(let i=1; i<arr.length; i++) {
        if(arr[i-1][arr[i-1].length-1] !== arr[i][0]){
            return false;
        }
    }
    return true;
};