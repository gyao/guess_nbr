objects = gen_rand_string.o evel_guess.o

guess_nbr: guess_nbr.c guess_nbr.h $(objects)
	gcc $^ -o guess_nbr
	
all: $(objects)
$(objects): %.o: %.c
	gcc -c $< -o $@
	
gen_rand_string.o: gen_rand_string.h

evel_guess.o: evel_guess.h

.PHONY: clean
clean:
	rm -f *.o
	rm -f guess_nbr
	rm -f *.gch
