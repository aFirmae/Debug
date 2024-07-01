let name = ['Nilashis', 107, 21, false];
console.log(name);

// Array methods
// 1. length
console.log(name.length);

// 2. Array.isArray()
console.log(Array.isArray(name));

// 3. toString()
console.log(name.toString());

// 4. join()
console.log(name.join(' - '));

// 5. push()
name.push('JavaScript');
console.log(name);

// 6. pop()
name.pop();
console.log(name);

// 7. unshift()
name.unshift('JavaScript');
console.log(name);

// 8. shift()
name.shift();
console.log(name);

// 9. splice()
name.splice(2, 0, 'JavaScript');
console.log(name);

// 10. concat()
let name2 = ['JavaScript', 'Python', 'Java'];
let name3 = name.concat(name2);
console.log(name3);

// 11. slice()
let name4 = name3.slice(0, 4);
console.log(name4);

// 12. indexOf()
console.log(name3.indexOf('JavaScript'));

// 13. lastIndexOf()
console.log(name3.lastIndexOf('JavaScript'));

// 14. includes()
console.log(name3.includes('JavaScript'));

// 15. reverse()
console.log(name3.reverse());

// 16. sort()
console.log(name3.sort());
