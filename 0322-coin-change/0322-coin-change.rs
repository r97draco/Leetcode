impl Solution {
    pub fn coin_change(coins: Vec<i32>, amount: i32) -> i32 {
        let max = amount + 1;
        let mut dp = vec![max; (amount + 1) as usize];
        dp[0] = 0;
        for i in 1..=amount {
            for coin in coins.iter() {
                if (i - coin) >= 0 {
                    dp[i as usize] = std::cmp::min(dp[i as usize], 1 + dp[(i - coin) as usize]);
                }
            }
        }
        if dp[amount as usize] == max {
            return -1;
        }
        dp[amount as usize]
    }
}