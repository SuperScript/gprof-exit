
default: \
it


compile: \
default.build \
conf-cc \
print-compile.sh \
systype \
warn-auto.sh
	sh makefile.build default.build compile compile

gprof_exit.o: \
default.o.build \
compile \
gprof_exit.c
	sh makefile.build default.o.build gprof_exit.o gprof_exit

it: \
default.build \
it=d \
gprof_exit.o
	sh makefile.build default.build it it

it.command: \
default.command.build \
it \
it=d
	sh makefile.build default.command.build it.command it

it.install: \
default.install.build \
it.command \
it=d
	sh makefile.build default.install.build it.install it

it.rts: \
default.rts.build \
it.command
	sh makefile.build default.rts.build it.rts it

mkfile: \
mkfile.build \
mkfile=d \
it.command \
it.rts
	sh makefile.build mkfile.build mkfile 

systype: \
default.build \
find-systype.sh \
trycpp.c \
x86cpuid.c
	sh makefile.build default.build systype systype
