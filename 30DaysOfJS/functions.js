function add(a, b) {
    while (b != 0) {
        let carry = a & b;
        a ^= b;
        b = carry << 1;
    }
    return a;
}
console.log(`Sum = ${add(2, 3)}`);


let a = function (a, b) {
    return a + b;
}
console.log(`Sum = ${a(2, 3)}`);


let b = (a, b) => a + b;
console.log(`Sum = ${b(2, 3)}`);