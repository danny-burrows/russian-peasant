run: main
	./main

test: rp-md-test
	./rp-md-test

example: eg
	./eg

rp-md-test:
	gcc -o rp-md-test test.c rp_md.c

main:
	gcc -o main main.c rp_md.c

eg:
	gcc -o eg example.c rp_md.c

clean:
	rm -f main rp-md-test eg