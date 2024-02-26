#include <iostream>
#include <vector>
#include <string>

std::string longestCommonSubstring(const std::string& s, const std::string& w) {
    int m = s.length();
    int n = w.length();

    std::vector<std::vector<int>> dp(m + 1, std::vector<int>(n + 1, 0));
    int maxLen = 0, endIndex = 0;

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (s[i - 1] == w[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
                if (dp[i][j] > maxLen) {
                    maxLen = dp[i][j];
                    endIndex = i - 1;
                }
            }
        }
    }

    return s.substr(endIndex - maxLen + 1, maxLen);
}

int main() {
    std::string s = "ABABC";
    std::string w = "BABCA";
    std::cout << longestCommonSubstring(s, w) << std::endl;  // Output: "BABC"
    return 0;
}
