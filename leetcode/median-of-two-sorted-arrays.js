/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number}
 */
var findMedianSortedArrays = function(nums1, nums2) {
    const sorted = [...nums1,...nums2].sort((a,b)=>(a-b));
    const len = sorted.length;
    const isEven = len % 2 == 0 ? true:false;
    if(isEven){
        const mid = (len/2) - 1;
        const recurring = sorted[mid+1] - sorted[mid];
        return (sorted[mid]+recurring/2);
    }
    return sorted[((len+1)/2)-1];
};
