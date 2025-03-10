# MULTIPROGRAMMING OPERATING SYSTEM

* Maximise CPU utilization
* Multiprogramming means that more than one process will be in main memory, which are ready to execute
* Process generally require CPU time and IO time. So if a running process performs IO or some other event which does not require CPU then instead of CPU remaining idle CPU makes a context switch and picks some other process for execution and this continues till there are no processes left for execution
* So CPU is never idle unless there are no processes left for execution
* **Advantages** :
  * High CPU utilization
  * Less waiting time, response time etc
  * May be extended to multiple users
  * Useful in cases where load is high
* **Disadvantages** :
  * Difficult scheduling
  * Main memory management is required
  * Memory fragmentation happens because of multiple incomplete processes occupying memory
  * Paging(Non-contiguous memory allocation)