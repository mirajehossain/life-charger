/**
 * @param {string} s
 * @param {number} numRows
 * @return {string}
 */
var convert = function(s, numRows) {
    if (numRows === 1) {
        return s;
    }
    const len = s.length;
    const totalIteration = Math.ceil(s.length / 2);
    const rowDiff = (numRows - 1) - 1;

    console.log(`total length of string is: ${len}, totalIteration: ${totalIteration}, rowDiff: ${rowDiff}`);


    let fullFillupArr = [];
    let mapping = {};
    let str = s;
    for (let i = 0; i < totalIteration; i++) {
        const calc = ((i+1) + (rowDiff*i) - 1);
        fullFillupArr.push(calc);
    }

    let rCount = 0;
    for (let i = 0; i < totalIteration; i++) {

        let itCount = numRows - (rCount+1);
        if (itCount === 0) {
            rCount = 0;
        }
        if (fullFillupArr.includes(i)) {
            for(let j = 0; j<numRows; j++) {
                (mapping[`${j}`] instanceof Array) ? mapping[`${j}`].push(str[j]) : mapping[`${j}`] = [str[j]];
            }
            str = str.slice(numRows,str.length);
        } else {
            mapping[`${itCount}`].push(str[0]);
            str = str.slice(1,str.length);
        }
        rCount++;
    }
    let finalStr = '';
    for (let i in mapping) {
        finalStr +=mapping[i].join('');
    }

    return finalStr;
};
