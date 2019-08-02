/**
 *   Return the second largest number in the array.
 *   @param {Number[]} nums - An array of numbers.
 *   @return {Number} The second largest number in the array.
 **/
function getSecondLargest(nums) {
    // Complete the function

    // Get the only unique value from numbers
    nums = [...new Set(nums)];

    // Then sort that unique numbers with follow the bigger to lower pattern
    nums.sort((x, y) => x < y);

    // Then return the second element
    return nums[1];
}