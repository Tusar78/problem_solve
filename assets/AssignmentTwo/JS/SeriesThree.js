let n = +prompt("How many number you enter: ", "");

let series = '';
for (let i = 1; i <= n; i = i + 2) {
  console.log(i);
  series += (1 / (i * i)).toFixed(2) + ' ';
}

console.log("\n\n(1/1^2 + ⅓^2 +....................+1/n^2) is");
console.log("------------------------\n");
console.log(series);