let arr = [7, 6, 5, 4, 3, 2, 1];



function quickSort(arr) {
    let s = 0, e = arr.length - 1;
    let pivot = 4;
    console.log(pivot)
    while (s != e) {
        if (arr[s] > pivot) {

            let t = arr[s];

            arr[s] = arr[e];

            arr[e] = t;


            // console.log(s, e, "    ------  ", arr)
            s += 1;
        }
        if (arr[e] < pivot) {
            let t = arr[s];

            arr[s] = arr[e];

            arr[e] = t;



            e -= 1;
        }
    }
    console.log(arr)
}


quickSort(arr);

