1. 硬件中断后执行操作系统代码。操作系统和程序交替执行。时间片结束都是靠TimeOut，TimeOut是一种中断
2. 操作系统频繁放弃控制权
3. 记账信息
![alt text](imgs/81.png)
```c
struct {
  struct spinlock lock;      // 保护进程表的自旋锁
  struct proc proc[NPROC];   // 进程数组（NPROC=64）
} ptable;
```
![alt text](imgs/82.png)
![alt text](imgs/83.png)
![D](imgs/84.png)
![alt text](imgs/85.png)
![alt text](imgs/86.png)
操作系统启动
![alt text](imgs/94zzy.jpg)