/**
 * @param {string} s
 * @return {string}
 */
const longestPalindrome = function (s) {
    const len = s.length;
    let palindromicString = '';
    let p1 = 0, p2 = 0;
    while(p1 < len) {
        const subStr = s.slice(p1,p2+1);
        if(isPalindrome(subStr)) {
            if(palindromicString.length < subStr.length) {
                palindromicString = subStr;
            }
        }
        p2++;

        if (p2 === len) {
            p1++;
            p2 = p1;
        }
    }
    return palindromicString;
};


function isPalindrome (s) {
    const len = s.length;
    for (let i = 0; i < Math.floor(s.length/ 2); i++) {
        if(s[i] !== s[len - i  - 1]) {
            return false;
        }
    }
    return true;
}