# 马尔可夫链
## 简单介绍
马尔可夫链是一个经典算法，马尔可夫链（Markov chain），又称离散时间马尔可夫链（discrete-time Markov chain），因俄国数学家安德烈·马尔可夫（俄语：Андрей Андреевич Марков）得名，为状态空间中经过从一个状态到另一个状态的转换的随机过程。该过程要求具备“无记忆”的性质：下一状态的概率分布只能由当前状态决定，在时间序列中它前面的事件均与之无关。这种特定类型的“无记忆性”称作马尔可夫性质。马尔科夫链作为实际过程的统计模型具有许多应用。
## 原理介绍 
马尔可夫链(Markov Chain),描述了一种状态序列,其每个状态值取决于前面有限个状态。马尔可夫链是具有马尔可夫性质的随机变量 X_1, X_2, X_3···的一个数列。这些变量的范围，即它们所有可能取值的集合，被称为“状态空间”，而 X_n 的值则是在时间 n 的状态。如果X_{n+1}对于过去状态的条件概率分布仅是 X_n 的一个函数，则  
$$P(X_{n+1}=x|X_1=x_1,X_2=x_2,···，X_n=x_n) = P(X_{n+1}=x|X_n=x_n).$$  
这里 x 为过程中的某个状态。上面这个恒等式可以被看作是马尔可夫性质。  
在马尔可夫链的每一步，系统根据概率分布，可以从一个状态变到另一个状态，也可以保持当前状态。状态的改变叫做转移，与不同的状态改变相关的概率叫做转移概率。随机漫步就是马尔可夫链的例子。随机漫步中每一步的状态是在图形中的点，每一步可以移动到任何一个相邻的点，在这里移动到每一个点的概率都是相同的（无论之前漫步路径是如何的）。   
用一句话来概括马尔科夫链的话，那就是某一时刻状态转移的概率只依赖于它的前一个状态。举个简单的例子，假如每天的天气是一个状态的话，那个今天是不是晴天只依赖于昨天的天气，而和前天的天气没有任何关系。这么说可能有些不严谨，但是这样做可以大大简化模型的复杂度，因此马尔科夫链在很多时间序列模型中得到广泛的应用，比如循环神经网络RNN，隐式马尔科夫模型HMM等。  
## 代码介绍
输入：要求是输入要测试的文件名  
输出：输出的结果在运行的命令行中  
过程：使用map和双向队列deque,找出前缀后面的下一个单词/汉字。  
