// Brian Kernighan's algorithm to count the number of set bits (1s) in an integer.
int count_bits(int n) {
    int count = 0;
    while (n) {
        n &= (n - 1);
        count++;
    }
    return count;
}
