/**
 * @param {Function} fn
 * @return {Function}
 */
function memoize(fn) {
    var obj = {}
    
    return function(...args) {
        if(args in obj){
            return obj[args];
        }
        else{
            let temp = fn(...args);
            obj[args] = temp;
            return temp;
        }
    }
}


/** 
 * let callCount = 0;
 * const memoizedFn = memoize(function (a, b) {
 *	 callCount += 1;
 *   return a + b;
 * })
 * memoizedFn(2, 3) // 5
 * memoizedFn(2, 3) // 5
 * console.log(callCount) // 1 
 */