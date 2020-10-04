function factorial(n) {
    let fact = 1;
    while(n > 0) {
        fact *= n;
        n--;
    }
    return fact;
}