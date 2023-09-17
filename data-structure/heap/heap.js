class MaxHeap {
    constructor() {
        this.heapSize = 0;
        this.heap = [];
    }
}

let heapSize = 0;
let heap = [];

function getParent(i) {
    return Math.floor((i - 1) / 2);
}

function getLeftChild(i) {
    return 2 * i + 1;
}


function getRightChild(i) {
    return 2 * i + 2;
}

function insert(data) {
    let i = heapSize;
    heap[i] = data;
    heapSize += 1;

    while (i != 0 && heap[getParent(i)] < heap[i]) {
        const temp = heap[i];
        heap[i] = heap[getParent(i)];
        heap[getParent(i)] = temp;
        i = getParent(i);
    }
}

insert(3);
insert(10);
insert(12);
insert(8);
insert(2);
insert(14);