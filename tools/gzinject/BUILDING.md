## Prerequisites

gcc, make

## Building
Run `./configure` You can use `--prefx=DIR` to specify the output directory, install will install gzinject to `DIR/bin`, then run `make` to build the executable, and `make install` to install it to `DIR/bin`

By default gzinject will use the crypto library provided by OpenSSL, to disable this and use builtin (slower) crypto functions remove `-D_USE_LIBCRYPTO` From the make file, and change SRC = gzinject.c to SRC = *.c
