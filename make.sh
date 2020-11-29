# . build.sh
. build_aa2c_tb.sh
./bin/testbench_aa2c stdout 2>&1 | tee run.trace
# ./bin/testbench_aa2c null