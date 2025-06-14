class Solution {
public:
    int nthUglyNumber(int n) {
        // dp[i] will store the i-th ugly number
        vector<int> dp(n + 1, 0);
        dp[1] = 1; // The first ugly number is 1

        // Initialize pointers for multiples of 2, 3, and 5
        int i2 = 1, i3 = 1, i5 = 1;

        int pt = 2; // Start filling dp[] from the 2nd position

        // Generate ugly numbers from 2 to n
        while (pt <= n) {
            // Compute the next possible ugly numbers from each factor
            int val1 = dp[i2] * 2;
            int val2 = dp[i3] * 3;
            int val3 = dp[i5] * 5;

            // Choose the minimum of the three as the next ugly number
            int nextUgly = min({val1, val2, val3});

            dp[pt] = nextUgly; // Store it
            pt++; // Move to the next position in dp

            // Increment the pointer(s) whose multiple matched the chosen value
            if (nextUgly == val1) i2++;
            if (nextUgly == val2) i3++;
            if (nextUgly == val3) i5++;
        }

        return dp[n]; // Return the nth ugly number
    }
};
