# CSES 解題筆記

> **Magic:**   
>加這三行可以加速輸入/輸出時間喔
>```cpp=
>ios::sync_with_stdio(false);
>cin.tie(nullptr);
>cout.tie(nullptr);
>```

## Apple Division
狀態壓縮 + 枚舉子集合
- 有 2^n 種子集合（約 1百萬，20位元），可以全部試
- 找出使 abs(total_sum - 2 * sum_sub) 最小的

>之前用 dp 解法，計算所有子集合的重量和
>但這樣會超時（重量能到$10^{10}$，炸開)

## Chessboard and Queens
思路：
- 用回溯嘗試在每行的自由格子放皇后
- 判斷目前放的皇后和之前放的皇后是否有攻擊衝突（同列、同對角線）
- 走到底放完 8 個皇后就算一種解法

## Creating String
用 DFS 遍歷所有排法

## Digit Queries
思路：
1. 找出位於幾位數
2. 找到其位於該區間內的第幾個數字
3. 找到其位於該數字內的第幾個位
很簡單喏

## Grid Coloring I
我不會

## Gray code 
用公式  

**$G(i) = i ⊕ (i>>1)$**
> **⊕** 為 xor

## Hanoi 
**河內塔**

最少移動次數為  
**$2^n-1$**

作法:
1. 先把上面 n-1 個盤子從 src 移到 aux（把它們暫時移開，目的是讓最大盤子可以直接從 src 移到 dst）
2. 把第 n（最大的）盤子從 src 直接移到 dst
3. 再把那 n-1 個盤子從 aux 移到 dst（放在第 n 盤上面）

## Knight Moves Grid
用 BFS 找最短距離

## Max grid construction
思路：
1. 對每一格 (i, j)： 把這一列左邊的數字 {grid[i][0..j-1]} 放入一個集合。
2. 把這一欄上方的數字 {grid[0..i-1][j]} 放入同一集合。
3. 從 0 開始找最小沒出現的數字填入 [i][j]

## Raab Game I
我不會

## String Reorder
用貪婪算法
思路：
1. 用一個「26維計數陣列」存字元數量
2. 每次嘗試從 A 到 Z，選擇數量 > 0 且不等於前一個字元的字元
3. 選中後減少計數，加入結果字串
4. 反覆直到完成或無法選字元則失敗

> 嘗試用 DFS 解過但徹底超時 (⊙ꇴ⊙)
