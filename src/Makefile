# Don't edit Makefile!  Use conf-* for configuration.

SHELL=/bin/sh

default: it

clean:
	rm -f compile gprof_exit.o it it-base load sysdeps systype

compile: conf-cc print-cc.sh systype warn-auto.sh
	rm -f compile
	sh print-cc.sh > compile
	chmod 755 compile

gprof_exit.o: compile gprof_exit.c
	./compile gprof_exit.c

it: it-base sysdeps

it-base: gprof_exit.o sysdeps

load: conf-ld print-ld.sh systype warn-auto.sh
	rm -f load
	sh print-ld.sh > load
	chmod 755 load

sysdeps: systype compile load
	rm -f sysdeps
	cat systype compile load >> sysdeps

systype: find-systype.sh trycpp.c x86cpuid.c
	sh find-systype.sh > systype
