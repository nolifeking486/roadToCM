# CPU Scheduling

* A process execution consists of a cycle of CPU execution and IO execution
* Normally every process begins with a CPU burst that may be followed by an IO burst then another CPU burst and so on
* **CPU bound** - Those processes which require most of the time on CPU
* **IO bound** - Those processes which require most of the time on IO device peripherals
* A good CPU scheduling idea should choose a mixture of both so that both CPU and IO can be utilised efficiently
## Types of CPU Scheduling:
  * **Non Pre-emptive**:
    * When a process completes it's execution
    * When a process leaves CPU voluntarily to perform some IO operation or wait for some event
  * **Pre-emptive**:
    * If a process enters into a ready state either from a new or waiting state and it is a high priority process
    * If a process switches from running state to ready state because the quantum expire

## CPU Scheduling Terminology:
* **Burst Time/Execution Time/Running Time** - It is the time required by process for running on CPU
* **Waiting Time** - Time spent by process in ready state waiting for CPU
* **Arrival Time** - Time when process enters into ready state
* **Exit Time** - Time when process completes it's execution and exits the system
* **Turn Around Time** - Total time spent by the process in the system
  * TAT = ET - AT = BT + WT
* **Response Time** - Time between when a process enters ready queue and get scheduled on the CPU for the first time

## CPU Scheduling Criteria
* Average Waiting Time - should be low
* Average Response Time - should be low
* CPU Utilization - should be high
* Throughput - Number of processes executing per unit time
