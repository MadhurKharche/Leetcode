/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
    return arr.filter((n,index) => {
        return Boolean(fn(n,index))
    } , true)
};