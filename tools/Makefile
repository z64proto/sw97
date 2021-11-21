CC := gcc
CFLAGS := -Wall -Wextra -pedantic -std=c99 -g -O2 -march=native -mtune=native
PROGRAMS := makeromfs elf2rom mkldscript
ZAPD := ZAPD/ZAPD.out

all: $(PROGRAMS)
ifeq (,$(wildcard gzinject/Makefile))
	cd gzinject && ./configure
endif
	$(MAKE) -C gzinject
	$(MAKE) -C ZAPD
	$(MAKE) -C z64compress

clean:
	$(RM) $(PROGRAMS) $(addsuffix .exe,$(PROGRAMS))
ifneq (,$(wildcard gzinject/Makefile))
	$(MAKE) -C gzinject clean
endif
	$(MAKE) -C ZAPD clean
	$(MAKE) -C z64compress clean

distclean: clean

.PHONY: all clean distclean

mkldscript_SOURCES := mkldscript.c util.c
elf2rom_SOURCES    := elf2rom.c elf32.c n64chksum.c util.c
makeromfs_SOURCES  := makeromfs.c n64chksum.c util.c

define COMPILE =
$(1): $($1_SOURCES)
	$(CC) $(CFLAGS) $$^ -o $$@
endef

$(foreach p,$(PROGRAMS),$(eval $(call COMPILE,$(p))))
