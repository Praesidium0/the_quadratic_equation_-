app.out: main.o getvalue.o
	g++ -g main.o getvalue.o -o app.out

main.o: main.cpp getvalue.h
	g++ -g -c main.cpp

getvalue.o: getvalue.cpp getvalue.h
	g++ -g -c getvalue.cpp

clean:
	rm -f *.o app.out