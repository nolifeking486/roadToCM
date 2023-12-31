## What is performance?
	- Measure of fast or responsive a system is under a given workload and given hardware
	- While measuring performance we keep amount of data and hardware fixed

## How to identify performance problem?
	- Some queue buildup is happening.
	- maybe network, db, os etc
## Reasons for queue buildup:
	- inefficient slow processing
	- serial resource access, eg. one thread at a time
	- limited resourse capacity, eg. we are doing parallel processing but we have limited number of cpu cores

------------------------------------------------------------------------------------------------
## Types of requests:
	- Serial: one request will get processed completely before taking next request
	- Simultaneous: Multiple requests at the same time


## Performance Principles:
	- Efficiency: How fast our system is handling serial requests
		- Resource Utilization: IO, CPU
		- Logic
		- Data Storage
		- Caching

	- Concurrency: Handling simultaneous requests
		- Hardware
		- Software
			- Queuing: this queue is basically due to process scheduling and similar things and not due to external calls
			- Coherence: synchronisation of data to prevent inconsistencies

	- Capacity: basically scale hardware