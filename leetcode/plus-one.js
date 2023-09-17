// this solution not working for big int
const plusOne = function(digits) {
    let n = 0;
    for (let i = 0; i < digits.length; i++) {
        n = (n * 10) + digits[i];
    }
    n += 1;

    const finalArray = [];
    while (n != 0) {
        finalArray.push(n % 10);
        n = Math.floor(n / 10);
    }
    return finalArray.reverse();
}

// console.log(plusOne([6,1,4,5,3,9,0,1,9,5,1,8,6,7,0,5,5,4,3]))

const plusOneV2 = function(digits) {
    let carry = 1;
    for (let i = digits.length - 1; i >= 0; i-=1 ) {
        const value = digits[i] + carry;
        if (value < 10) {
            carry = 0;
            digits[i] = value;
        } else {
            carry = 1;
            digits[i] = 0;
        }
    }

    if (carry) {
        digits.unshift(carry);
    }
    return digits;
}
console.log(plusOneV2([6,1,4,5,3,9,0,1,9,5,1,8,6,7,0,5,5,4,3]))