function merge(arr, left, right, mid) {

    const leftSubArraySize = mid - left + 1;
    const rightSubArraySize = right - mid;

    const L = new Array(leftSubArraySize);
    const R = new Array(rightSubArraySize);

    for (let i = 0; i < leftSubArraySize; i++) {
        L[i] = arr[left + i];
    }
    for (let j = 0; j < rightSubArraySize; j++) {
        R[j] = arr[mid + 1 + j];
    }


    let i = 0
    let j = 0;
    let k = left;

    while (i < leftSubArraySize && j < rightSubArraySize) {
        if (L[i] < R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < leftSubArraySize) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < rightSubArraySize) {
        arr[k] = R[j];
        j++;
        k++;
    }

}

function mergeSort(arr, left, right) {
    if (left >= right) {
        return;
    }

    const mid = left + parseInt((right - left) / 2);

    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, left, right, mid);
}

const arr = [5, 6, 7, 8, 3, 9, 2, 1];
console.log(arr);

mergeSort(arr, 0, arr.length - 1);
console.log(arr);