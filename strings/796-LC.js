// Intuition

//      To solve this question, I did what was mentioned in a way of coding.
// Approach

//     - Simply, First I have Checked if given s string is equal to goal string because maybe it might be a possible as if it can be equal then we can return true from here only in O(1).

//     - If not then actual solution comes into the picture.
//     - We will take s into another variable called ans, which will be modified.
//     - Every time when I iterate over the ans string to the times of string characters present.
//     - I took first character of ans stored it to temproray variable and then removed it from the front of ans and appended to the back of ans string, As it is given in the question. this operation performed n times where n is s length.
//     - I checked everytime if ans is equal to goal or not if not then at the end returned false.

// Complexity

//     Time complexity: O(n)

//     Space complexity: O(1)


var rotateString = function(s, goal) {
    if (s === goal){
        return true;
    }
    for(let i=0; i<s.length; i++) {
        const firstChar = s[0];
        s = s.substring(1);
        s+=firstChar;
        if(s === goal) return true;
    }
    return false;
};