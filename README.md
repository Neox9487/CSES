# Gray code 
用公式  

**$G(i) = i ⊕ (i>>1)$**
> **⊕** 為 xor

# Hanoi 
**河內塔**

最少移動次數為  
**$2^n-1$**

想把 n 個盤子從 src 移到 dst（輔助為 aux）的作法
1. 先把上面 n-1 個盤子從 src 移到 aux（把它們暫時移開，目的是讓最大盤子可以直接從 src 移到 dst）
2. 把第 n（最大的）盤子從 src 直接移到 dst
3. 再把那 n-1 個盤子從 aux 移到 dst（放在第 n 盤上面）


# Creating String
用 dfs 遍歷所有排法

# Apple Division
狀態壓縮 + 枚舉子集合
- 有 2^n 種子集合（約 1百萬，20位元），可以全部試
- 計算子集合的總重量 sum_sub，另一組重量為 total_sum - sum_sub
- 找出使 abs(total_sum - 2 * sum_sub) 最小的

>之前用 dp 解法，計算所有子集合的重量和，嘗試找一組子集合重量和最接近總重量的一半  
>**dp[i][j]** 表示   **「前 i 個蘋果能否組合出重量 j」**  
>但這樣會超時（重量能到$10^{10}$)