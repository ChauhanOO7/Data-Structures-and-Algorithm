#include <iostream>
#include <vector>

const int MOD = 1e9 + 7;

int countEnchantedStrings(int minLength, int maxLength, int oneGroup, int zeroGroup) {
    std::vector<int> dp(maxLength + 1, 0);
    dp[0] = 1;  // Base case: There's one way to form an empty string

    for (int i = 1; i <= maxLength; ++i) {
        // Add blocks of '1's
        for (int j = oneGroup; j <= i; j += oneGroup) {
            dp[i] = (dp[i] + dp[i - j]) % MOD;
        }
        // Add blocks of '0's
        for (int j = zeroGroup; j <= i; j += zeroGroup) {
            dp[i] = (dp[i] + dp[i - j]) % MOD;
        }
    }

    int result = 0;
    for (int i = minLength; i <= maxLength; ++i) {
        result = (result + dp[i]) % MOD;
    }

    return result;
}

int main() {
    int minLength, maxLength, oneGroup, zeroGroup;
    std::cin >> minLength >> maxLength >> oneGroup >> zeroGroup;

    std::cout << countEnchantedStrings(minLength, maxLength, oneGroup, zeroGroup) << std::endl;

    return 0;
}