重做yoj第一次实验

# 主定理
![master](imgs/master.png)
![alt text](imgs/mp1.png) ![alt text](imgs/mp2.png) ![alt text](imgs/mp3.png)
![alt text](imgs/th3.2-mast.png)
![alt text](imgs/mpr1.png)
![alt text](imgs/mpr2.png)
![alt text](imgs/mpr3.png)
迭代求解方法
![alt text](imgs/deidai.png)

# 算法时间复杂度分析：代入法 (The Substitution Method)

代入法是一种用于求解递推关系式（Recurrence Relations）时间复杂度的通用方法，尤其适用于主定理（Master Method）无法直接解决的复杂情况。其核心思想可以概括为：“先大胆猜测，再小心求证”。

## 步骤 1：猜测答案 (Step 1: Guess the answer)
* **目的**：得出一个候选的时间复杂度界限或精确公式（例如 T(n) = O(n log n)）。
* **常用技巧**：
  * **展开法 (Unrolling / Iteration)**：将递推式不断代入自身，一层层展开，观察系数、内部项和附加项的变化规律，总结出第 t 步的通用数学模式，最后令内部项等于基本情况（如令 n/(2^t) = 1）来求解。
  * **画递归树 (Recursion Tree)**：通过画图直观地算出每一层的代价和树的深度，然后求和。
  * **直觉与经验**：基于对类似算法的了解直接猜测。

## 步骤 2：证明猜测正确 (Step 2: Prove the guess is correct)
* **目的**：使用严谨的**数学归纳法 (Mathematical Induction)** 在数学上证明第一步的猜测是绝对成立的。
* **证明标准流程**：
  1. **基本情况 (Base Case)**：验证当 n 取最小有效边界值（如 n=1）时，猜测的公式是否成立。
  2. **归纳假设 (Inductive Hypothesis)**：假设对于所有满足 1 <= n < k 的正整数，猜测的公式都已经成立。
  3. **归纳推导 (Inductive Step)**：利用原始递推公式的定义，并将归纳假设代入其中（例如把 T(k/2) 替换为假设的公式），通过代数化简，严密地推导并证明当 n = k 时，该公式依然符合相同的数学结构。

## 步骤 3：得出结论 (Step 3: Profit)
* **目的**：整理并输出最终的定理和证明过程，完成解答。
* **要点**：在正式的学术报告、论文或考试中，通常不需要展示第一步（猜测/展开）的草稿过程。只需高冷地写出最终的定理（Theorem）和基于第二步的数学归纳法证明（Proof）即可。

---

### 💡 经典示例回顾
求解归并排序的递推式：`T(n) = 2 * T(n/2) + n`

1. **猜想**：通过展开法推导得出 `T(n) = n(log(n) + 1)`。
2. **证明**：设 T(1) = 1。假设对于 n < k 公式成立。当 n = k 时：
   T(k) = 2 * T(k/2) + k
   T(k) = 2 * [ (k/2) * (log(k/2) + 1) ] + k
   T(k) = k * (log(k) - 1 + 1) + k
   T(k) = k * log(k) + k = k(log(k) + 1)
   推导结果与猜想结构完美吻合，证明成立。
3. **结论**：该递推式的时间复杂度为 `O(n log n)`。
![alt text](imgs/ex1.png)
因为这样的迭代中常数无法保持不变，O失效了，但却还是用了O记号
![alt text](imgs/ex2.png) ![alt text](imgs/ex3.png) ![alt text](imgs/ex4.png)
![alt text](imgs/probm1.png) ![alt text](imgs/prpbm.png)

# D-select
![alt text](imgs/1.png)
![alt text](imgs/2.png)
![alt text](imgs/3.png)


QuickSort
Expected runtime O(nlog(n)).
Worst-case runtime O(n2).
In practice works great!
![4](imgs/4.png)

![alt text](imgs/5.png) ![alt text](imgs/6.png)
在计算期望运行时间时，要 __避免__ 简单的使用 __期望场景__ 的运行时间评估算法的期望运行时间。

![alt text](imgs/7.png)
计算概率时 我们关心决定性时刻，故如此列式
![alt text](imgs/8.png)
![alt text](imgs/9.png)
