
int prime(int n) {
    for(int i = 2; i * i <= n; i++) {	// loop many times as needed 
        if (n % i == 0) {			// no remainder means not prime
            return 0;			// not prime
        }
    }
    return 1;				// prime
}