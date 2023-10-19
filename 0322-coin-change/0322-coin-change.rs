impl Solution {
    pub fn coin_change(coins: Vec<i32>, amount: i32) -> i32 {
        let max = i32::MAX;
        let mut dp = vec![max; (amount + 1) as usize];
        dp[0] = 0;

        for i in 1..=amount as usize {
            for &coin in &coins { // change here, borrowing 'coins' for iteration
                if coin as usize <= i && dp[i - coin as usize] != max {
                    dp[i] = dp[i].min(dp[i - coin as usize] + 1);
                }
            }
        }

        if dp[amount as usize] == max { 
            -1 
        } else { 
            dp[amount as usize] 
        }
    }
}