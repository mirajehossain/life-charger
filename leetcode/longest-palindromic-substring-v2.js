/**
 * @param {string} s
 * @return {string}
 */
const longestPalindrome = function (s) {
    const len = s.length;
    // R A A A B A A A R
    // A B B A
    let start = 0, end = 0;
    for (let i = 0; i < len; i++) {
        const odd = expandPalindrome(i, i); // for odd  palindrome
        const even = expandPalindrome(i, i+1); // for even  palindrome
        const maxLen = Math.max(even, odd);
        if (maxLen > end - start + 1) {
            start = i - Math.floor((maxLen - 1) / 2);
            end = i  + Math.floor(maxLen / 2)
        }
    }
    console.log({start, end})

    return s.substring(start, end+1);
};


function expandPalindrome(left, right, len, str) {
    // A B B A
    while(left >= 0 && right < len && str[left] === str[right]) {
        left -=1;
        right +=1;
    }
    return right - left - 1;
}
console.log(longestPalindrome('aabbaa'));
