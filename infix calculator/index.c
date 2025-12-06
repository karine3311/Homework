#include <stdio.h>
#include <ctype.h>

int main() {
    char c;
    int num = 0, last = 0, result = 0;
    char op = '+';   // previous operator

    // this is to read expression until newline
    while ((c = getchar()) != '\n' && c != EOF) {

        if (isdigit(c)) {
            num = num * 10 + (c - '0'); // build number
            continue;
        }

        // if c is an operator, process the previous number
        if (c == '+' || c == '-' || c == '*' || c == '/') {

            if (op == '+') result += last, last = num;
            else if (op == '-') result += last, last = -num;
            else if (op == '*') last = last * num;
            else if (op == '/') last = last / num;

            op = c;   // store new operator
            num = 0;  // reset for next number
        }
    }

    // process last number
    if (op == '+') result += last, last = num;
    else if (op == '-') result += last, last = -num;
    else if (op == '*') last = last * num;
    else if (op == '/') last = last / num;

    result += last;

    printf("%d\n", result);
    return 0;
}
