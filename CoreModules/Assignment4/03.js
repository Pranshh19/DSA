// console.log(x);
// var x = 5;
// console.log(x);

//No error


// console.log(y);  //can't access y before initialization error
// let y = 5;
// console.log(y);


// const x; //error

//For Each
// let z = [1, 2, 4, 5];
// let sum = 0;
// z.forEach(myFunction);
// function myFunction(item) {
//   sum += item;
// }

// console.log(sum);


// //Map
// const array1 = [1, 4, 9, 16];

// const map1 = array1.map(x => x * 2);

// console.log(map1);


//Destructuring

// const x = [1, 2, 3, 4, 5];
// const [y, z] = x;
// console.log(y); // 1
// console.log(z); // 2



//Spread Operator
let y, z, p, q;
const sum = (y,z,p,q) => {
    return y + z + p + q;
}

const x = [1, 2, 3, 4];
console.log(sum(...x)); 
