compile:
	verilator -Wall --binary --trace --timing demux.v tb.v
run:
	./obj_dir/Vdemux
all: compile run
