// Write a JavaScript function to compare dates (i.e. greater than, less than or equal to).
const compareDate = (date1, date2) => {
    return date1 > date2 ? 'date1 > date2' : date1 < date2 ? 'date1 < date2' : 'date1 == date2';
}
console.log(compareDate(new Date('2015/1/2 00:00'), new Date('2015/1/2 00:00')));
console.log(compareDate(new Date('2015/1/2 00:30'), new Date('2015/1/2 00:00')));
console.log(compareDate(new Date('2015/1/2 00:00'), new Date('2015/1/2 00:30')));