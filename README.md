ofxKyotoCabinet
===============

[Kyoto Cabinet](http://fallabs.com/kyotocabinet/): a straightforward implementation of Fast, scalable, small dataBase management.



## Installation
- Download [Source Packages of the core library (C/C++)](http://fallabs.com/kyotocabinet/) 
- modifie configure file for compiling 32bit libraries like example...

kyotocabinet-1.x.xx/configure  
around line 3980:

	# System-depending optimization
	printf 'checking for 64-bit availability... '
	if printf 'main() {}' | $CC -xc -m64 -o config.tmp - >config.tmp 2>&1
	then
	  # !!!: change -m64 to -m32 on below 2 lines
	  MYCFLAGS="-m32 $MYCFLAGS"
	  MYCXXFLAGS="-m32 $MYCXXFLAGS"
	  printf 'yes\n'
	else
	  printf 'no\n'
	fi

- and execute configure, make, make install

Terminal

	$ cd path/to/kyotocabinet-1.x.xx
	$ ./configure
	$ make
	$ make install

… then kyotocabinet files was installed to your /usr/local/lib


## Spec
[http://fallabs.com/kyotocabinet/spex.html](http://fallabs.com/kyotocabinet/spex.html)

## API
[http://fallabs.com/kyotocabinet/api/](http://fallabs.com/kyotocabinet/api/)

## Copyright
(C) 2009-2012 FAL Labs