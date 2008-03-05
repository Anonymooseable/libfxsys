import os

#the name of our GNU C cross compiler
cc = 'sh3eb-unknown-linux-gnu-gcc'
ar = 'sh3eb-unknown-linux-gnu-ar'
ccflags = '-Os -nostdlib -Wall -fomit-frame-pointer -fno-ident'

env = Environment( CPPPATH='#include/', CCFLAGS = ccflags, ENV = {'PATH' : os.environ['PATH']}, CC = cc, AR = ar );
Export('env')

# list collecting all object names created
objects = []

objects = SConscript('src/SConscript')

# create the library from all the object files
lib = env.Library('libfxsys.a', objects)
Clean(lib, 'objects');
