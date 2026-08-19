.PHONY: all calc run clean

all: calc

calc:
	$(MAKE) -C calc

run:
	$(MAKE) -C calc run ARGS="$(ARGS)"

clean:
	$(MAKE) -C calc clean

