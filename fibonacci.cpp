#include<iostream>
#include<utility>
// Binary recursion
// Issue: Recalculation and slow 
// Runtime: Theta(N^2)
int linear_fib(int n){
    if (!n)
        return 0;
    if (n == 1)
        return 1;

    return linear_fib(n-1) + linear_fib(n-2);
}

// Tail recursion (Using std::pair)
// Runtime: O(n)
// Space complexity: O(1)
int tail_fib(int n, std::pair<int, int> pair){
    if (n == 1)
        return pair.second;
    
    return tail_fib(n-1, std::make_pair(pair.second, pair.first + pair.second));
}

int main(void){
    int nth;
    std::cin >> nth;
    std::cout << linear_fib(nth) << std::endl;

    std::pair<int, int> dummy(0, 1); 
    std::cout << tail_fib(nth, dummy);
    return 0;
}