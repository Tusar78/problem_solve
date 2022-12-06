let n = +prompt("How many number you enter: ", "");

let series = '';
for (let i = 1; i <= n; i++) {
  series += (1 / i).toFixed(2) + ' ';
}

console.log("\n\nSeries of : (1/1 + ½ + ⅓ +...................+1/n) is");
console.log("------------------------\n");
console.log(series);