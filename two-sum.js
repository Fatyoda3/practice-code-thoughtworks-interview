var twoSum = function (nums, target) {
    let t = []

    for (let i = 0; i < nums.length; i++) {

        for (let j = 1; j < nums.length; j++) {
            if (nums[j] + nums[i] === target) {
                t.push(i);
                t.push(j);

                return [i, j];
            }


        }


    }

    return t;

};
console.log(twoSum([3, 2, 4], 6))