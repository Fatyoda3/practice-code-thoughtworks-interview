var search = function (nums, target) {
    let mid, lo = 0, hi = nums.length;

    while (lo </* = */ hi) {
        mid = Math.floor(lo + ((hi - lo) / 2));
        // mid = /* Number( */mid
        if (nums[mid] === target)
            return mid;

        if (nums[mid] > target)
            hi = mid - 1;

        else
            lo = mid;
    }
    return -1;
};

console.log(search([-1, 0, 3, 5, 9, 12], 2));