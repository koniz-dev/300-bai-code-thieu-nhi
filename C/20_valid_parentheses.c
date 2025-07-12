bool isValid(char* s) {
    char stack[10000];
    int top = -1;
    for (int i = 0; s[i]; i++) {
        char c = s[i];
        if (c == '(' || c == '{' || c == '[') {
            stack[++top] = c;
        } else {
            if (top == -1) return 0;
            char t = stack[top--];
            if ((c == ')' && t != '(') ||
                (c == '}' && t != '{') ||
                (c == ']' && t != '[')) {
                return 0;
            }
        }
    }
    return top == -1;
}
