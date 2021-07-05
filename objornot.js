// Write a JavaScript function to check whether an `input` is a date object or not.
const isDate = d => {
    if (Object.prototype.toString.call(d) === '[object Date]') {
        return true;
    } else {
        return false;
    }
}
console.log(isDate(1234));
console.log(isDate([12,23,45]));
console.log(isDate(new Date(86400000)));

const is_date = d => {
    return d instanceof Date;
}
console.log(is_date(1234));
console.log(is_date([12,23,45]));
console.log(is_date(new Date(86400000)));
