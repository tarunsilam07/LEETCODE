/**
 * @param {number} x
 * @return {number}
 */
var reverse = function(num) {
    let flag=0;
    if(num<0){
        flag=1;
        num=Math.abs(num);
    }
    let rev=0;
    while(num>0){
        rev=rev*10+(num%10);
        num=Math.floor(num/10);
    }
    if(rev<=-Math.pow(2,31) || rev>=Math.pow(2,31)-1){
        return 0;
    }
    if(flag==1)
    return -rev;
    return rev;
};