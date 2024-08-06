/**
 * @param {string} s
 * @return {boolean}
 */
var isValid = function(s) {
    let st = [];
    for (let i = 0; i < s.length; i++) {
        let ch = s[i];
        if (ch === '(' || ch === '[' || ch === '{') {
            st.push(ch);
        } else {
            if (st.length > 0) {
                let top = st[st.length - 1];
                if ((ch === '}' && top === '{') || (ch === ']' && top === '[') || (ch === ')' && top === '(')) {
                    st.pop();
                } else {
                    return false;
                }
            } else {
                return false;
            }
        }
    }
    return st.length === 0;
};