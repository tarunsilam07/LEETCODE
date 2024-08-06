/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(arr, target) {
    const mpp=new Map();
    const n=arr.length;
    for(let i=0;i<n;i++){
        const num=arr[i];
        let remove=target-num;
        if(mpp.has(remove)){
            return [i,mpp.get(remove)];
        }
        mpp.set(num,i);
    }
    return [-1,-1];
};