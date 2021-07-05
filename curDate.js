// Write a JavaScript function to get the current date
const curDay = sp => {
   const date = new Date();
   let mm = date.getMonth() + 1;
   let dd = date.getDate();
   let yy = date.getFullYear();

   mm < 10 ? `0${mm}` : `${mm}`;
   dd < 10 ? `0${dd}` : `${dd}`;

   return `${mm}${sp}${dd}${sp}${yy}`;
}

console.log(curDay('/'));
console.log(curDay('-'));
console.log(curDay('.'));