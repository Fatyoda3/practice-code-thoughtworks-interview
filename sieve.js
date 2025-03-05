const upto = 100

bool_array = Array(upto).fill(true)



for (let i = 2; i < upto; i++) {
    if (bool_array[i])

        for (let j = i * i; j < upto; j += i) {
            bool_array[j] = false;
        }


}

for (let i = 0; i < upto; i++) {

    console.log(i, bool_array[i])

}