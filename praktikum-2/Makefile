args := $(word 2,$(MAKECMDGOALS))
file := $(patsubst %.c,%.o,$(args))

run:
	@gcc $(args) -o ./out/$(file)
	@./out/$(file)
