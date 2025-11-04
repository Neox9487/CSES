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
用 dp 
計算所有子集合的重量和，嘗試找一組子集合重量和最接近總重量的一半
dp[i][j] 表示「前 i 個蘋果能否組合出重量 j」