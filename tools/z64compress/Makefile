CC := gcc
CFLAGS := -DNDEBUG -s -Os -flto -Wall -Wextra -mtune=native -march=native

o/src/enc/%.o: CFLAGS := -DNDEBUG -s -Ofast -flto -Wall -march=native -mtune=native

SRC_DIRS := $(shell find src -type d)
C_FILES  := $(foreach dir,$(SRC_DIRS),$(wildcard $(dir)/*.c))
O_FILES  := $(foreach f,$(C_FILES:.c=.o),o/$f)

$(shell mkdir -p $(foreach dir,$(SRC_DIRS),o/$(dir)))

all: $(O_FILES)
	$(CC) $(CFLAGS) $(O_FILES) -lm -lpthread -o z64compress

o/%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	$(RM) -rf z64compress o
