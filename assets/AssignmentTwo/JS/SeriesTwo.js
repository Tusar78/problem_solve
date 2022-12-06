let n = +prompt("How many number you enter: ", "");

let series = '';
for (let i = 2; i <= n; i = i + 2) {
  series += (1 / (i * i)).toFixed(2) + ' ';
}

console.log("\n\nSeries of : (1/1 + ½ + ⅓ +...................+1/n) is");
console.log("------------------------\n");
console.log(series);