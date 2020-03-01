inc=include

.PHONY: all clean realclean
all: geometry


geometry : obj/geometry.o obj/rectangle.o obj/square.o obj/triangle.o obj/circle.o obj/union.o obj/complement.o obj/intersection.o obj/basic.o obj/region.o obj/point.o
	g++ -o $@ -I$(inc) $^ -lm

obj/geometry.o : src/geometry.cpp $(inc)/triangle.h $(inc)/circle.h $(inc)/rectangle.h $(inc)/square.h $(inc)/complement.h $(inc)/union.h $(inc)/intersection.h	
	g++ -o $@ -c -I$(inc) $<

$(inc)/rectangle.h $(inc)/square.h $(inc)/circle.h $(inc)/triangle.h : $(inc)/basic.h   

$(inc)/union.h $(inc)/complement.h $(inc)/intersection.h $(inc)/basic.h : $(inc)/region.h   

$(inc)/region.h: $(inc)/point.h

obj/%.o : src/%.cpp $(inc)/%.h
 	g++ -o $@ -c -I$(inc) $< 

clean :
	rm obj/*.o

realclean : clean
	rm geometry