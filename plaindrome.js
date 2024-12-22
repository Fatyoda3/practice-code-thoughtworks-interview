var isPalindrome = function (s) {
    let k = "abcdefghijklmnopqrstuvwxyz";
    let arr = s.split('');


    let str = [];

    for (c of arr) {
        let m = c.toLowerCase();
        if (k.includes(m)) {
            str.push(m);
        }
    }
    console.log(str)
    // let pal = true;
    for (let i = 0; i <= str.length / 2; i++) {
        if (str[i] != str[str.length - i - 1]) {
            // pal = false;
            return false;
        }
    }

    return true;


};
let t = 345.94;
console.log(Math.floor(t))
/* t.toFixed(0);
console.log(t.toFixed(0)) */
// console.log(isPalindrome("race a car"))
// console.log(isPalindrome("A man, a plan, a canal: Panama"))
console.log(isPalindrome('0P'));