OBJECTS = main.o box.o
CIXX = g++ #could be useful if you are using multiple compilers
LDFLAGS = -lm
CXXFLAGS = Wall –Wpedantic –O2 #the o stands for optimization

main: main.o box.o
	$(CIXX) -o main $(CIXXFLAGS) $(LDFLAGS) $(OBJECTS)

main.o: main.cpp box.h
	$(CIXX) $(CIXXFLAGS) -c main.cpp

box.o: box.cpp box.h
	$(CIXX) $(CIXXFLAGS) -c box.cpp box.h

#//reverseorder.o: reverseorder.cpp reverseorder.h
	$(CIXX) $(CIXXFLAGS) -c reverseorder.cpp reverseorder.h

clean:
	rm -f $(OBJECTS) box.h.gch