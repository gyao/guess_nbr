all: guess_nbr.o gen_rand_string.o evel_guess.o
	gcc guess_nbr.o gen_rand_string.o evel_guess.o -o guess_nbr

guess_nbr.o: guess_nbr.c guess_nbr.h
	gcc -c guess_nbr.c guess_nbr.h

gen_rand_string.o: gen_rand_string.c gen_rand_string.h
	gcc -c gen_rand_string.c gen_rand_string.h

evel_guess.o: evel_guess.c evel_guess.h
	gcc -c evel_guess.c evel_guess.h

clean:
	rm -f *.o
	rm -f guess_nbr
	rm -f *.gch