int findMax(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

 // USING TERNARY OPERATOR:

int findMax(int a, int b) {
    return (a > b) ? a : b;
}
