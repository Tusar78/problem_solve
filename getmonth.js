// Write a JavaScript function to get the month name from a particular date
const monthName = dt => {
    const month = ['January', 'February', 'March', 'April', 'May', 'June', 'July', 'August', 'September', 'October', 'November', 'December'];
    return month[dt.getMonth()];
}
console.log(monthName(new Date('02/01/2021')));
console.log(monthName(new Date('03/24/2011')));