FLAGS = -fno-stack-protector -z execstack  -m32 -g

EXES = vuln

all: $(EXES)


$(EXES):
	gcc $(FLAGS) $@.c -o $@

clean:
	rm -f $(EXES)
