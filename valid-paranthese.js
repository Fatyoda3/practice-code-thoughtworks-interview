
var isValid = function (s) {

    let stack = []
    // for (let index = 0; index < s.length; index++) {
    let index = 0;
    do {

        stack.push(s[index]);
        // console.log("ff")
        if (index >= 1) {
            if (stack[stack.length - 1] == ')' && stack[stack.length - 1 - 1] == '(') {
                stack.pop();
                stack.pop();
                // console.log('first')
                // console.log(stack)
            }

            if (stack[stack.length - 1] == ']' && stack[stack.length - 1 - 1] == '[') {
                stack.pop();
                stack.pop();
                // console.log('sec')
                // console.log(stack)

            }
            if (stack[stack.length - 1] == '}' && stack[stack.length - 1 - 1] == '{') {
                stack.pop();
                stack.pop();
                // console.log('third')
                // console.log(stack)
            }
        }
        index++;

        /*  if (stack.length === 0) break; */
    } while (index < s.length);
/*     console.log(stack.length)
    console.log(stack) */
    return stack.length === 0 ? true : false;



};

// console.log(isValid(''))

// console.log(isValid('[]'))

// console.log(isValid('{}'))

// // console.log(isValid('()'));
// // console.log(isValid('[()]'));
// console.log(isValid('{[()]}'));
// isValid('[]');
// isValid('()');
console.log(isValid('{[]}[]'));
console.log(isValid('[]'));
console.log(isValid('{[]}'));
console.log(isValid('{{}{}{}[]}'));
console.log(isValid('}{}{}[{{}[]{}]'));



// isValid('{}[]()');
