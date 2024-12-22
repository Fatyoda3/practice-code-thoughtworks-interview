const power = (a, b) => {

    // a = parseInt(a);

    a = parseFloat(a || 1);
    b = parseInt(b || 1);

    if (typeof a != 'number' && typeof b != 'number')
        return NaN;

    let signed = b < 0 ? true : false;

    if (signed) b = -b;

    if (b == 0)
        return 1;

    let t = 1;

    for (let index = 0; index < b; index++) t *= a;


    if (signed)
        return 1 / t;

    return t;

}
function max({ a, b, c } = {}) {
    a = a || 'a'
    b = b || 'b'
    c = c || 'c'
    console.log(a, b, "value of c " + c);

}

max({ a: "jack", c: "bana", b: "hello" })
max()
console.log(power(2));
console.log(power(2, 0))
console.log(power(2, 1))
console.log(power(-2, 2))
console.log(power(/* 0/0 */'232banana', -2.22))//first char encountered must be a number to proceed forward only cares about the digits in the string, and simply leaves the non-numeric characters , returns the number or NaN in exceptions 
console.log(parseInt('y1234y5yy'));
console.log(0 / 0)
console.log(7 ** 4)
let k = 74;

