/*
*
To solve this question, first I have analyzed what question is telling to do.

    - First, we have to keep track of char which is same and its count which will be increamental, if it reaches 9 or anyother character, boom reached first step solution.
    - Then we will keep or append the count and current character to the result string.
    - Eventually, there will be a case when lets say last char is "e" 4 times so here our condition will not be true so it will no append to result string.
    - For that we will append at last after all that iteration, before returning the result string.
*/

var compressedString = function(word) {
    let result = "";
    let currChar = word[0];
    let count = 1;
    for(let i=1; i<word.length; i++) {
        if(currChar !== word[i] || count === 9) {
            result += count + currChar;
            currChar = word[i];
            count = 1;
        }
        else{
            count++;
        }
    }

    result += count + currChar;
    return result;
};