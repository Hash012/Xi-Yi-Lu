# Machine Learning

### 1. Introduction
0. 考核：
    - 平时（40％）
        - 考勤（5%）
        - 期中（15%）
        - 大作业（20%）
    - 期末（60％）
![3](imgs/3.png)
1. How to decide whether to use ML?
    They should
    - exists some 'underlying pattern' to be learned
    - but no programmable (easy) definition
    - somehow there is data about the pattern

2. Artificial Intelligence Is the Goal，Machine Learning Is the Method
    ![1](imgs/1.png)
    ![2](imgs/2.png)
    ![5](imgs/5.png)
    ![6](imgs/6.png)
3. 知识框架
    1. Techniques (Course highlights)
        - Pattern Discovery
        - Cluster analysis 
        - Classifier Building
        - Regression
        - Recommendation
        - Reinforcement Learning…
    
    2. Applications
        - Customer Relationship Management (CRM)
        - Web pages Searches and Analysis 
        - Network Security
        - Robotics
        - Social Networks
        - Genomic Database…
    3. Principles(With the help of GPT and yourself)
        - Database Technology:
            - Indexing, Compression, Data Structure
        - AI/ Machine Learning
        - Statistics
        - Information Theory
        - Theoretical CS :
          - Approximate, Random, Online 
          - Algorithms
        - Mathematical Programming
        - Computational Geometry  …

4. 学习方法——**机器学习算法的组件化思想**
- Every machine learning algorithm has five components:
    $$
    \begin{aligned}
    &\text{1. 学习任务} \\[5pt]
    &\left.
    \begin{aligned}
    &\text{2. 模型（或模式）结构} \\
    &\text{3. 评分函数（损失函数，Loss函数）} \\
    &\text{4. 搜索和优化方法}
    \end{aligned}
    \right\}
    \quad \text{搜索和优化方法} \\[5pt]
    &\text{5. 数据管理策略}
    \end{aligned}
    $$
- 机器学习算法的组件化思想
        该观点强调了算法的本质，而不仅仅是算法的罗列
        每一种组件都蕴含着一些非常通用的系统原理，掌握了每一种组件的基本原理之后，再来理解由不同组件“装配”起来的算法
        当面对一个新的应用时，数据分析人员应该从组件的角度，根据应用需求，考虑应该选取哪些组件，来组成一个新的算法，而不是考虑选取哪个现成的算法。
        - 对于小的数据集，模型（模式）的解释和预测能力相对于计算效率来说可能要重要的多
        但是，随着数据集的增大，计算效率将变得越来越重要。对于海量数据，必须在模型（模式）的完备性和计算效率之间进行平衡，以期对现有数据达到某种程度的拟合。
        
        - 统计学家强调推理过程，优先关注模型（模式）、评分函数、参数估计等，将计算效率问题放在其次；而计算机科学家则更注重高效的空间搜索和数据管理
        
        
    
    1. 组件1：机器学习任务
        1. 模式学习：致力于从数据中发现模式，比如 频繁模式、异常模式……
        
        2. 模型学习
            1. 预测建模
                - 分类：被预测的变量是范畴型或者离散型（有监督的学习过程）
                - 回归：被预测的变量是数值型或者连续型
            2. 描述建模：目标是描述数据的全局特征；
            - 描述和预测的关键区别是：预测的目标是唯一的变量，如信用等级、疾病种类等，而描述并不以单一的变量为中心
            - eg: 聚类分析
    
    2. 组件2：模型(或模式)结构
    eg: 线性回归模型、决策树、关联规则、图模型、神经网络、支持向量机、层次聚类模型、集成模型、频繁序列模式……
    - 模型是对整个数据集的高层次全局性的描述或总结
    - 模式是局部的，它仅对一小部分数据做出描述，有可能只支持几个对象或对象的几个属性
    - 全局的模型和局部的模式是相互联系的。例如，为了检测出数据集内的异常对象（局部模式），需要一种对数据集内正常对象的描述（全局模型）
    - 模型和模式都有参数与之相关
        - 如：模型Y=aX+b的参数是a和b；模式（如果X>c，则Y>d的概率为p）的参数为c，d和p
        - 通常把参数不确定的模型叫做模型的结构。把参数不确定的模式叫做模式的结构（一般形式）
        - 一旦模型（模式）的参数被确定，便将这个特定的模型（模式）称为“已经拟合了的模型（模式）”，或者简称为模型（模式） 
        - 将结构拟合到数据：有了模型（模式）的结构之后，接下来的任务就是要根据数据集为模型（模式）的结构选择合适的参数值，即将结构拟合到数据
        - 由于模型（模式）的结构的参数值的评价指标是评分函数 
        
    3. 组件3：评分函数 
    - 评分函数用来对数据集与模型（模式）结构的拟合程度进行评估
    如果没有评分函数就没有办法为模型（模式）选择出一套好的参数值来。
    - 也叫损失函数（Loss）、代价函数、目标函数、优化函数、优化目标等等
    - 常用的评分函数有：
        - 似然（Likelihood）函数
        - 均方误差（MSE）
        - 准确率（Accuracy）、召回率（Recall）
        - 交叉墒（Cross Entropy）
        - 后验概率（Posterior Probability）
        - Cost/Utility
        - Margin
        - K-L Divergence
    - 在为模型（模式）选择一个评分函数时，既要能够很好地拟合现有数据，又要避免过度拟合（对极端值过于敏感），同时还要使拟合后的模型（模式）尽量简洁
    - 不存在绝对“正确”的模型（模式）；对数据的微小变化不太敏感的模型（模式）才是一个好的模型（模式）
    
    4. 组件4：搜索和优化方法 
    搜索和优化的目标是确定模型（模式）的结构及其参数值，以使评分函数达到最小值（或最大值）eg: 均方误差最小、准确率最高、似然最大……
        1. 优化问题：针对特定的模型，发现其最佳参数值的过程。如果模型（模式）的结构已经确定，则搜索将在参数空间内进行，目的是针对这个固定的模型（模式）结构，优化评分函数
            - 方法：爬山（Hill-Climing）、梯度下降（ Gradient Descent）（凸优化）、期望最大化（Expectation-Maximization, EM）、线性规划（Linear Programming）（约束优化）…
        
        2. 搜索问题：从潜在的模型（模式）族中发现最佳模型（模式）结构的过程。如果模型（模式）的结构已经确定，则搜索将在参数空间内进行，目的是针对这个固定的模型（模式）结构，优化评分函数。
            - 方法：贪婪搜索（组合优化）、分支界定、宽度（深度）优先遍历……

    5. 组件5：数据管理策略 
    针对海量数据，应该设计有效的数据组织和索引技术，或者通过采样、近似等手段，来减少数据的扫描次数，从而提高机器学习算法的效率。

    ![4](imgs/4.png)
        
    
    
            
        

### 2. Frequent Pattern Analysis - Set - Association Rule
![7](imgs/7.png)
1. Association Rule Discovery
    1. 规则：${x1，x2，…,xn} \rightarrow Y$
    2. 相关定义:
        - 可信度和（用户给的）最小可信度:$support(A \Rightarrow B) = P(A \cup B)$
        - 支持度和（用户给的）最小支持度:confidence(A \Rightarrow B) = P(B|A)
        - 最小可信度和最小支持度：用户提供
        - 满足最小支持度的项目集
    3. 子问题：
        - __根据用户输入的最小支持度，寻找频繁项目集__
        - __根据用户输入的最小可信度，产生关联规则__
    ![8](imgs/8.png)
    ![9](imgs/9.png)
    4. Boolean AR下算法设计的重要前提：
    以“市场-购物篮”为数据模型，把数据看作一个布尔
    矩阵，其中行=购物篮，列=商品项目：
    - 矩阵很稀疏，几乎全是0
    - 列的数目（项目数）要足够小，每列存点东西的话可以把所有的列放入内存，同时列的数目又要足够大，每个项目对存点东西的话不能全部放入内存
    - 行的数目很多，不可能把整个矩阵放入内存，即使利用稀疏采用压缩也不行、
    5. 估算一个算法运行时间的最好手段是看它对同一个数据读了几次，因为算法的主要代价是从硬盘读数据

    6. 重要的公理：__如果一个项目集S是频繁的（项目集S的出现频度大于最小频度min_supp），那么S的任意子集也是频繁的__
    $\Rightarrow$ __如果一个项目集S不是频繁的（项目集S的出现频度小于最小频度min_supp），那么S的任意超集也不是频繁的__

    7. 找出频繁项目集:
        1. 两类算法：
            1. 分层算法 （每一层需要对数据做一次扫描。）先找出大小为1的频繁项目集，再找出大小为2的频繁项目集，再找出大小为3的频繁项目集，等等。
            我们只需要把精力放在大小为2的频繁项目集上，因为：
            - 通常，大小为2的频繁项目集就足够了。
            - 在很多数据集合里，查找大小为2的频繁项目集比较困难，进行高层查找比查找大小为2的频繁项目集用的时间要少
            
            2. 数据做一次（最多两次）扫描，找出最大频繁集（任何超集都不是频繁集的集合S）
        2. Apriori 算法步骤1：分层寻找频繁项目集
        ![10](imgs/10.png)
    
    8. Apriori 算法步骤2: 产生关联规则
        ![11](imgs/11.png)
        ![12](imgs/12.png)
        ‘*’是指前 $k-1$ 个元素必须相同而最后一个元素不同的元素两两连接。

    9. 对Apriori算法的改进
        1. 当>=2时,减小候选集Ci的大小.这一点非常重要,因为即使对于找频繁的对(大小为2的频繁项目集),候选集的大小必须足够小,给每个对加一个计数器之后还可以在内存中放得下
            （基于hash的算法以及Iceberg 查询对hash算法的改进）
        2.	把找L1,L2,…,Ln的过程合并成一次(最多两次)扫描,而不是每层扫描一次
            （Sample算法，Partition算法，Dynamic算法）  
        3.	减小数据库的大小
            任何一个事务（一个购物蓝），如果它不包含
            k-itemset，则不包含k+1-itemset，可以去掉
            （基于hash的算法采用了该技术）
    ![13](imgs/13.png)
    ![14](imgs/14.png)
    ![15](imgs/15.png)

    10. Bottleneck of Frequent-pattern Learning
    ![16](imgs/16.png)


### 3. Frequent Pattern Analysis - sequence - Association Rule
![17](imgs/17.png)
1. 定义：
    - 项集(Itemset)：是各种项目组成的集合
    - 序列(Sequence)：是不同项目集(ItemSet)的有序排列，序列s可以表示为```s = <s1s2…sm>，sj(1 <= j <= m)为项目集(Itemset)，也称为序列s的元素```
    - 序列的长度：一个序列中包含的项目集的个数
    ![18](imgs/18.png)
    - 子序列：
    ![19](imgs/19.png)
    - 序列的支持度：
    ![20](imgs/20.png)
    - 频繁序列：
    ![21](imgs/21.png)
    - 项集的支持度
    ![22](imgs/22.png)
    （Large itemset：频繁项集）
2. GSP算法
    ![23](imgs/23.png)
    Five phases
    - Sort phase
        Sort the database with customer-id as the major key and transaction-time as the minor key
        
    - Large itemset phase
        ![24](imgs/24.png)
    - Transformation phase
    要将项集展开计算（如：Transformed Customer Sequence）
        ![25](imgs/25.png)
    - Sequence phase
        Use the set of litemsets to find the large sequence (frequent sequence).
        
    - Maximal phase
        - Find the maximum sequences among the set of large sequences.
        - In some algorithms, this phase is combined with the sequence phase.
        ```c
        for (k = n; k > 1; k--) do
             foreach k-sequence sk do
                  Delete from S all subsequences of sk
        /*
        Algorithm:
        S   the set of all large sequences
        n  the length of the longest sequence   
        */
        ```
    !!??有疑问，这里是GSP的终点吗
3. AprioriAll算法
    The basic method to mine sequential patterns
    Based on the Apriori algorithm.
    Count all the large sequences, including non-maximal sequences.
    Use Apriori-generate function to generate candidate sequence.
    ![26](imgs/26.png)
    ![28](imgs/28.png)
    * Pruning Phase
    
    eg.
    ![27](imgs/27.png)
    ![29](imgs/29.png)
    
    - Judgement
    Waste too much time in counting non-maximal sequence, which is impossible to be a sequential pattern.
    
4. AprioriSome
    It generates candidates for a pass using only the large sequences found in the previous pass.
    Divided into 2 phase: 
            forward vs. backward
    Advantage: 
        Reduce counting time wasted in counting non-maximal ones.
    - cont.
    ![30](imgs/30.png)
    ![31](imgs/31.png)
    ![32](imgs/32.png)
    ![33](imgs/33.png)

- 发展：
    $AprioriAll \rightarrow AprioriSome \rightarrow GSP$

5. 发现序列规则
    - 部分序序列规则Partially-Ordered Sequential rule：
    ![34](imgs/34.png)
    - Two properties:
        ![35](imgs/35.png)
    - 序列规则查找：
        ![36](imgs/36.png)
        ![37](imgs/37.png)
    
    - Algorithm：CMRules algorithm
        ![38](imgs/38.png)
        ![39](imgs/39.png)
        ![40](imgs/40.png)
        顺序检查：顺序支持度、顺序置信度


### 4. Frequent Pattern Analysis - graph
![alt text](imgs/41.png) ![alt text](imgs/42.png)
Proximity on Graph: What?  Relevance Closeness Similarity
![43](imgs/43.png)
![alt text](imgs/44.png)
![alt text](imgs/45.png)
![alt text](imgs/46.png)

### 5. Writebased Association Mining(重点结合原ppt&bilibili复习)
1. ![alt text](imgs/47.png)
为优化-VIPER：
Implement DFS with bitmap compression of data in vertical format
![alt text](imgs/48.png)
![alt text](imgs/50.png)
2. FP-Growth
![alt text](imgs/49.png)
![alt text](imgs/51.png) ![alt text](imgs/52.png) ![alt text](imgs/53.png) ![alt text](imgs/54.png) ![alt text](imgs/55.png) ![alt text](imgs/56.png) ![alt text](imgs/57.png) ![alt text](imgs/58.png) ![alt text](imgs/59.png) ![alt text](imgs/60.png) ![alt text](imgs/61.png) ![alt text](imgs/62.png) ![alt text](imgs/63.png) ![alt text](imgs/64.png)

### 6. Writebased Sequential Pattern Discovery
![alt text](imgs/65.png) ![alt text](imgs/66.png) ![alt text](imgs/67.png)

### 7. Writebased Sub-Graph Mining
![alt text](imgs/68.png)