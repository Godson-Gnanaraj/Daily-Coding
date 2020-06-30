run: a.out
	./a.out

a.out: $(file)
	g++ $(file)

clean:
	rm a.out
