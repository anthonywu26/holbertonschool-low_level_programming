# Green Efficiency Analysis
In this project, we profile a simple program with 3 components: build, process and reduce. We measure and compare the clock cycles and time taken to excecute the 3 tasks.

### Measurement Methodology
- Time.h standard library is used to record timestamps. We use the following steps:
- Add code blocks around the 3 function calls to record start and end times using `clock_t` data type and `clock()` function.
    ```
    clock_t start, end;
    start = clock();
    function_we_are_timing();
    end = clock();
    elpased_time = (double) (end - start) / CLOCKS_PER_SEC;
    ```
- Calculate elapsed time by computing `end - start` and converting to floating point. We divide by `CLOCK_PER_SEC` to convert from clock cycles to seconds.
- Print the elapsed times for build, process and reduce seperately and added together.
- We repeat 3 times and take the average.

### Observed Performance Differences
```bash
    $ ./instrumentation_lab 
        TOTAL seconds: 0.000738
        BUILD_DATA seconds: 0.000295
        PROCESS seconds: 0.000308
        REDUCE seconds: 0.000135 
    
    $ ./instrumentation_lab 
        TOTAL seconds: 0.000836
        BUILD_DATA seconds: 0.000302
        PROCESS seconds: 0.000324
        REDUCE seconds: 0.000210
    
    $ ./instrumentation_lab 
        TOTAL seconds: 0.000780
        BUILD_DATA seconds: 0.000288
        PROCESS seconds: 0.000344
        REDUCE seconds: 0.000148
```
The averages over three runs are:
- Total time (seconds): 0.000785
- `build_dataset` time (seconds): 0.000295
- `process_dataset` time (seconds): 0.000325
- `reduce_checksum` time (seconds): 0.000164

Discussion:
- The `process_dataset` function consistently takes the longest, followed by `build_dataset` and finally `reduce_checksum`.
- `reduce_checksum` only ever reads data, without writing. `build_dataset` writes data once, whilst `process_dataset` reads and also writes. This is some loose evidence for the idea that the cost of memory accesses is approx read < write < read and write.

### Relation Between Runtime and Energy Consumption
- According to [The Silent Byte: Why Your Code’s Carbon Footprint Matters (and How to Shrink It)](https://hmnshudhmn24.medium.com/the-silent-byte-why-your-codes-carbon-footprint-matters-and-how-to-shrink-it-a434b7ef420c), by Himanshu Dhiman, the energy consumption and footprint of code is directly related to the number of CPU cycles, memory usage and network activity that the code uses. The high level idea is that when a computer does work, it consumes power and generates heat which also requires additional power to cool. Therefore, writing efficient code does not just make programs run faster, but it also means running the code consumes less power.

### Limitations of the Experiment
- We use time.h to measure the time taken to execute code. Using other libraries like mach/mach_time.h (machine time) may allow more accurate timings.
- The code that we are running may be subject to compiler transformations and CPU execution optimisations. As a result, the machine instructions that actually execute may not fully reflect the c source code as its written.
- There are also other processes being run on the computer. For instance, my web browser is rendering the sandbox, my system is running background services and my OS kernel is performing kernel tasks. In my computer, the CPUs will constantly context switch between different processes and wont always be executing the c code.

### Practical Engineering Takeaway
- When writing code, it is important to always profile and measure the actual code performance on the target machine. Through accurate measurement of the code performance, we can make decisions of how to write more efficient code.
