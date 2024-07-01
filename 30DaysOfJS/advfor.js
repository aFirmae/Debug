let nums = [9, 7, 4, 3, 0, 8];

for (let num in nums) {
    console.log(num);  // Prints the index
}

for (let num of nums) {
    console.log(num);  // Prints the value
}

// Example
let names = [
    ['Repo', 20],
    ['Milo', 25],
    ['Tina', 30],
    ['Luna', 35]
]

for (let name of names) {
    console.log(name);
}

for (let name of names) {
    for (let n of name) {
        console.log(n);
    }
}

for (let [name, age] of names) {
    console.log(`Name: ${name} and Age: ${age}`);
}


// Copying arrays and accessing the values
let arr = nums;
console.log(arr);

let idx0 = arr[0];
let idx1 = arr[1];
console.log({idx0, idx1});

let [first, second] = arr;  // Destructuring the array
console.log({first, second});

let [f, s, ...rest] = arr;  // Rest operator
console.log({f, s, rest});

let newArr = [...arr, 100];  // Spread operator
console.log(newArr);