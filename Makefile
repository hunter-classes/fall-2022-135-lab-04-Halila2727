OBJECTS = main.o box.o checkerboard.o
CIXX = g++ #could be useful if you are using multiple compilers
LDFLAGS = -lm
CXXFLAGS = Wall –Wpedantic –O2 #the o stands for optimization

main: main.o box.o checkerboard.o
	$(CIXX) -o main $(CIXXFLAGS) $(LDFLAGS) $(OBJECTS)

main.o: main.cpp box.h checkerboard.h
	$(CIXX) $(CIXXFLAGS) -c main.cpp

box.o: box.cpp box.h
	$(CIXX) $(CIXXFLAGS) -c box.cpp box.h

checkerboard.o: checkerboard.cpp checkerboard.h
	$(CIXX) $(CIXXFLAGS) -c checkerboard.cpp checkerboard.h

clean:
	rm -f $(OBJECTS) box.h.gch checkerboard.h.gch