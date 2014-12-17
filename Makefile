final3: final3.c 
	clang -Wall -o final3 final3.c -lm

clean : 
	rm -f *~
	rm -f final3

veryclean : clean
	rm -f final3
