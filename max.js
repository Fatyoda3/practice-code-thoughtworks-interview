function maxMul(array) {
    let first = 0;
    let second = 0;

    for (let index = 0; index < array.length; index++) {

        if (first < array[index]) {
            first = array[index];
        }
        if (second < array[index] && array[index] != first) {
            second = array[index];
        }

    }


   /*  for (let index = 0; index < array.length; index++) {


    }
 */
    console.log(first * second)
    return first * second

}

maxMul([10, 2, 3, 7, 5])