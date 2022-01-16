/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLongestSubstring = function(s) {
    let finalMaxCount = 0;
    let set = new Set();
    let j = 0;
    for (let i = 0; i<s.length; i++) {
        while(j < s.length) {
            
            if(!set.has(s[j])) {
                set.add(s[j]);
                finalMaxCount = Math.max(finalMaxCount, j - i + 1)
                j++;
            } else {
                set.delete(s[i]);
                break;
            }
        }
    }
    
    return finalMaxCount;
};
