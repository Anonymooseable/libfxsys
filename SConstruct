import os

#the name of our GNU C cross compiler
cc = 'sh3eb-unknown-linux-gnu-gcc'
ar = 'sh3eb-unknown-linux-gnu-ar'
ccflags = '-Os -nostdlib -Wall'

env = Environment( CPPPATH='../include/', CCFLAGS = ccflags, ENV = {'PATH' : os.environ['PATH']}, CC = cc, AR = ar );
Export('env')

# the subdirectories we want to work with
subdirectories = ['file', 'key', 'print', 'disp']

# list collecting all object names created
objects = []

for subdirectory in subdirectories:
	o = SConscript('%s/SConscript' % subdirectory)
	objects.extend(o)

# create the library from all the object files
env.Library('libfxsys.a', objects)
