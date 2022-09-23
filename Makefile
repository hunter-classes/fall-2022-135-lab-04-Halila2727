OBJECTS = main.o box.o checkerboard.o cross.o
CIXX = g++ #could be useful if you are using multiple compilers
LDFLAGS = -lm
CXXFLAGS = Wall –Wpedantic –O2 #the o stands for optimization

main: main.o box.o checkerboard.o cross.o
	$(CIXX) -o main $(CIXXFLAGS) $(LDFLAGS) $(OBJECTS)

main.o: main.cpp box.h checkerboard.h cross.h
	$(CIXX) $(CIXXFLAGS) -c main.cpp

box.o: box.cpp box.h
	$(CIXX) $(CIXXFLAGS) -c box.cpp box.h

checkerboard.o: checkerboard.cpp checkerboard.h
	$(CIXX) $(CIXXFLAGS) -c checkerboard.cpp checkerboard.h

cross.o: cross.cpp cross.h
	$(CIXX) $(CIXXFLAGS) -c cross.cpp cross.h

clean:
	rm -f $(OBJECTS) box.h.gch checkerboard.h.gch cross.h.gch