let numbers = [1, 2, 3, 4, 5];

// Array iteration: for loop
let sum = 0;
for (let i = 0; i < numbers.length; i++) {
    sum += numbers[i];
}
console.log(sum);


// Array iteration: forEach
let sum1 = 0;
numbers.forEach(function (number) {
    sum1 += number;
});
console.log(sum1);


// forEach with arrow function
let sum2 = 0;
numbers.forEach((number) => sum2 += number);
console.log(sum2);

numbers.forEach((number, index) => console.log(`Index ${index} has value ${number}`));


// linear search
let find = 3;
numbers.forEach((number, index) => {
    if (number === find) {
        console.log(`Number ${find} found at index ${index}`);
    }
});


// Array iteration: map
let square = numbers.map(number => number * number);
console.log(square);


// Array iteration: filter
let odd = numbers.filter(number => number % 2 !== 0);
console.log(odd);

let small = numbers.filter(number => number < 3);
console.log(small);

let oddIndex = numbers.filter((number, index) => index % 2 !== 0);
console.log(oddIndex);


// find, findIndex, findLast, findLastIndex, some, every
let find1 = numbers.find(number => number === 3);
console.log(find1);

let findIndex = numbers.findIndex(number => number === 3);
console.log(findIndex);

let findLast = numbers.find(number => number === 5);
console.log(findLast);

let findLastIndex = numbers.findLastIndex(number => number === 5);
console.log(findLastIndex);

let some = numbers.some(number => number > 2);
console.log(some);

let every = numbers.every(number => number !== NaN);
console.log(every);


// Split
let sentence = 'I love JavaScript';
let words = sentence.split(' ');
console.log(words);

