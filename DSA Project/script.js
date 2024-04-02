function convertAndEvaluate() {
    const expressionField = document.getElementById("expression");
    const stepsField = document.getElementById("steps");
    const resultField = document.getElementById("result");

    const expression = expressionField.value;
    const expressionType = document.querySelector('input[name="expressionType"]:checked').value;

    const stack = [];
    const operators = "+-*/^";

    // Function to convert postfix to infix
    function convertPostfixToInfix(postfixExpression) {
        const tokens = postfixExpression.split(" ");
        const conversionSteps = [];

        for (let token of tokens) {
            if (!operators.includes(token)) {
                stack.push(token);
                conversionSteps.push(["Push", token, stack.filter((value, index, self) => self.indexOf(value) === index).join(" ")]);
            } else {
                const operand2 = stack.pop();
                const operand1 = stack.pop();
                const result = `(${operand1} ${token} ${operand2})`;
                stack.push(result);
                conversionSteps.push(["Pop", operand1, operand2, stack.filter((value, index, self) => self.indexOf(value) === index).join(" ")]);
            }
        }

        if (stack.length === 1) {
            return {
                infixExpression: stack[0],
                steps: conversionSteps,
            };
        } else {
            return {
                infixExpression: "Invalid postfix expression",
                steps: conversionSteps,
            };
        }
    }

    // Function to convert prefix to infix
    function convertPrefixToInfix(prefixExpression) {
        const tokens = prefixExpression.split(" ");
        const conversionSteps = [];

        for (let i = tokens.length - 1; i >= 0; i--) {
            const token = tokens[i];
            if (operators.includes(token)) {
                const operand1 = stack.pop();
                const operand2 = stack.pop();
                const result = `(${operand1} ${token} ${operand2})`;
                stack.push(result);
                conversionSteps.push(["Pop", operand2, operand1, stack.filter((value, index, self) => self.indexOf(value) === index).join(" ")]);
            } else {
                stack.push(token);
                conversionSteps.push(["Push", token, stack.filter((value, index, self) => self.indexOf(value) === index).join(" ")]);
            }
        }

        if (stack.length === 1) {
            return {
                infixExpression: stack[0],
                steps: conversionSteps,
            };
        } else {
            return {
                infixExpression: "Invalid prefix expression",
                steps: conversionSteps,
            };
        }
    }

    let infixExpression = "";
    let conversionSteps = [];

    if (expressionType === "postfix") {
        const postfixResult = convertPostfixToInfix(expression);
        infixExpression = postfixResult.infixExpression;
        conversionSteps = postfixResult.steps;
    } else if (expressionType === "prefix") {
        const prefixResult = convertPrefixToInfix(expression);
        infixExpression = prefixResult.infixExpression;
        conversionSteps = prefixResult.steps;
    }

    // Update the stepsField with a table
    const tableHtml = `
        <table>
            <tr>
                <th>Action</th>
                <th>Operand</th>
                <th>Stack</th>
                <th>Expression</th>
            </tr>
            ${conversionSteps.map(step => `
                <tr>
                    <td>${step[0]}</td>
                    <td>${step[1]}</td>
                    <td>${step[2]}</td>
                    <td>${step[3] === undefined ? "-" : step[3]}</td>
                </tr>
            `).join('')}
        </table>
    `;
    stepsField.innerHTML = tableHtml;

    resultField.textContent = "";
    resultField.textContent = eval(infixExpression);
}