function fib(n) {

    if (n >= 1)
        return fib(n - 1) + fib(n - 2);
    else
        return 1;
}

// console.log(fib(3));
var fibCal = {};

function fibO(n) {
    fibCal[0] = 0;
    fibCal[1] = 1;
    for (let index = 2; index <= n; index++) {
        /*    if (fibCal.hasOwnProperty((index - 1)) && fibCal.hasOwnProperty((index - 2))) { */
        // f += fibCal[index - 1] + fibCal[index - 2];
        // }
        // else {
        fibCal[index] = fibCal[index - 1] + fibCal[index - 2];
        // }


    }


}
// function x(i) return [2i]
fibO(10);

console.log(fibCal[3]);
