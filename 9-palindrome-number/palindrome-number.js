/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function(num) {
    if(num<0)
    return false;
    let rev=0;
    let temp=num;
    while(temp>0){
        rev=rev*10+(temp%10);
        temp=Math.floor(temp/10);
    }
    if(rev==num)
        return true;
    return false;
};