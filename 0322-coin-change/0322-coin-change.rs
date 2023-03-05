impl Solution {
    pub fn coin_change(coins: Vec<i32>, amount: i32) -> i32 {
        let mut changes = vec![amount+1; (amount+1) as usize];
        changes[0] = 0;
        for i in 1..(amount+1) as usize {
            for &coin in &coins {
                let coin = coin as usize;
                if coin > i {continue};

                changes[i] = changes[i].min(changes[i-coin] + 1);
            }
        }

        let change = changes[amount as usize];
        if change == amount+1 {-1} else {change}
    }
}