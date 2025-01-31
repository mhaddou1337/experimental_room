let n = 0;
console.log(n);
n = 10;
//calcul on js
console.log(n);
console.log(n*n);
console.log(n**n);
console.log(n + '4'); // on a une petite error ici car nour donne '4'
console.log(n + parseInt('4'));
console.log(n + parseFloat('4.9565'));
console.log(n - '4');
console.log(n/ "2");
console.log(n/2 * 4);
console.log(n + parseInt('4vv'));
console.log(n + parseInt('vv4'));// la meme chose avec parsefloat
//check varibles is num
console.log(Number.isInteger("moewww"));
console.log(Number.isInteger("95"));
console.log(Number.isInteger(+"95"));
n = 9999999999999999;
console.log(Number.isSafeInteger(n));
console.log(Number.MAX_SAFE_INTEGER);
console.log(Number.MIN_SAFE_INTEGER);
n = 0;
let y = 1;
console.log(`n: ${n + y++}`);
console.log(`n: ${n + ++y}`); 

console.log(Number.isNaN(+"cats"+ 4));
//math
console.log(Math.E); // upper is porerty like E
console.log(Math.PI);
console.log(Math.abs(-100));
console.log(Math.sqrt(4));
console.log(Math.sqrt(9));
console.log(Math.pow(2 , 7));
console.log(2**7);
console.log(Math.random());
console.log(Math.random());
console.log(Math.round(0.5));
console.log(Math.round(0.49));
console.log(Math.floor(9.50));
console.log(Math.ceil(9.49));

let mount = 9; //window.prompt();
console.log(`mount of tax is ${mount*25*0.1} MAD`);
console.log(typeof mount);

console.log(typeof mount.toString());
console.log(typeof mount);
//magic tricks with str
let str = "mhaddou \n";
console.log(str.repeat(3));
console.log(str.length);
//access to every element on string
console.log(str.charAt(1));
console.log(str[0]);

console.log(str.charAt(100));
console.log(str[100]);
console.log(str.indexOf('u'));
console.log(str.indexOf('u',-10)); // if he did't found char return -1
console.log(str.indexOf('dd')); // give us pos we can also use indexof'u',give him when he should start search
console.log(str.lastIndexOf('d')); // search from last to first
console.log(str.lastIndexOf('d', +'3')); //revese
console.log(str.slice(1,5));
str = "ich_nicht_spreche_spanisch";
console.log(str.split('_', 2));
console.log(str.split(''));
console.log(str.substring(4, 9));
console.log(str.slice(-8));

/*
out : 
0
main.js:4 10
main.js:5 100
main.js:6 10000000000
main.js:7 104
main.js:8 14
main.js:9 14.9565
main.js:10 6
main.js:11 5
main.js:12 20
main.js:13 14
main.js:14 NaN 
*/