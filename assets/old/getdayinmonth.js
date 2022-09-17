// Write a JavaScript function to get the number of days in a month
const getDayInMonth = (mm, yy) => {
    const date = new Date(yy, mm, 0);
    return date.getDate();
}
console.log(getDayInMonth(2, 2020));
console.log(getDayInMonth(5, 2015));