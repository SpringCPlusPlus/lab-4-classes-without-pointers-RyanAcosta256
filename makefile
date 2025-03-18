all: a.out

a.out:
	g++ ./Rectangle1.cpp Point.cpp test.cpp -o a.out

test: a.out
	./a.out -s -d -t