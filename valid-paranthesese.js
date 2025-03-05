let p = "{[{}[{}{}}]()]}"

let index = 0;

let stack = [];

do {
    stack.push(p[index])
    if (index > 0) {

        if (stack[stack.length - 1] == "}" && stack[stack.length - 1 - 1] == "{") {
            stack.pop();
            stack.pop();
        }


        if (stack[stack.length - 1] == "]" && stack[stack.length - 1 - 1] == "[") {
            stack.pop();
            stack.pop();
        }
        if (stack[stack.length - 1] == ")" && stack[stack.length - 1 - 1] == "(") {
            stack.pop();
            stack.pop();
        }

    }
    index++;

} while (index < p.length)


console.log(stack)