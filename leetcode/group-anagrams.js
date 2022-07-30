/**
 * @param {string[]} strs
 * @return {string[][]}
 */
var groupAnagrams = function(strs) {
    const strMap = {};
    strs.map(s => {
        // const sortStr = s.split('').sort().join('');
        const sortStr = s.split('');
        mergeSort(sortStr, 0, s.length -1);
        
        
        if (!strMap[sortStr]) {
            strMap[sortStr] = [s];
        } else {
            strMap[sortStr].push(s);
        }
    });
    
    return Object.values(strMap)
};

function merge(s, left, right, mid) {
    const leftSubArrSize = mid - left + 1;
    const rightSubArrSize = right - mid;
    
    const L = new Array(leftSubArrSize);
    const R = new Array(rightSubArrSize);
    
    for (let i = 0; i < leftSubArrSize; i++)  {
        L[i] = s[left+ i];
    }
    
    for (let j = 0; j < leftSubArrSize; j++)  {
        R[j] = s[mid + 1 + j];
    }
    
    let i = j = 0;
    let k = left;
    
    while(i < leftSubArrSize && j < rightSubArrSize) {
        if (L[i] < R[j]) {
            s[k] = L[i];
            i++;
        } else {
            s[k] = R[j];
            j++;
        }
        k++;
    }
    
    while (i < leftSubArrSize) {
        s[k] = L[i];
        i++;
        k++;
    }
    while(j < rightSubArrSize) {
        s[k] = R[j];
        j++;
        k++;
    }
    // console.log('>>>>>>', s);
}

function mergeSort(s, left, right) {
    console.log(s, left, right)
    if (left >= right) {
        return
    }
    const mid = left + parseInt((right - left) / 2);
    mergeSort(s, left, mid);
    mergeSort(s, mid + 1, right);
    merge(s, left, right, mid);
}
