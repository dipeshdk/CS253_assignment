inc=include

.PHONY: all clean realclean
all: geometry


geometry : obj/geometry.o obj/rectangle.o obj/square.o obj/triangle.o obj/circle.o obj/union.o obj/complement.o obj/intersection.o obj/basic.o obj/region.o obj/point.o
	g++ -o geometry -I$(inc) $^ -lm

obj/geometry.o : src/geometry.cpp $(inc)/triangle.h $(inc)/circle.h $(inc)/rectangle.h $(inc)/square.h $(inc)/complement.h $(inc)/union.h $(inc)/intersection.h	
	g++ -o obj/geometry.o -c -I$(inc) src/geometry.cpp



obj/rectangle.o : src/rectangle.cpp $(inc)/rectangle.h $(inc)/basic.h
	g++ -o obj/rectangle.o -c -I$(inc) src/rectangle.cpp 

obj/square.o : src/square.cpp $(inc)/square.h $(inc)/basic.h
	g++ -o obj/square.o -c -I$(inc) src/square.cpp 

obj/triangle.o : src/triangle.cpp $(inc)/triangle.h $(inc)/basic.h
	g++ -o obj/triangle.o -c -I$(inc) src/triangle.cpp 

obj/circle.o : src/circle.cpp $(inc)/circle.h $(inc)/basic.h
	g++ -o obj/circle.o -c -I$(inc) src/circle.cpp 




obj/union.o : src/union.cpp $(inc)/union.h $(inc)/region.h
	g++ -o obj/union.o -c -I$(inc) src/union.cpp 

obj/intersection.o : src/intersection.cpp $(inc)/intersection.h $(inc)/region.h
	g++ -o obj/intersection.o -c -I$(inc) src/intersection.cpp 

obj/complement.o : src/complement.cpp $(inc)/complement.h $(inc)/region.h
	g++ -o obj/complement.o -c -I$(inc) src/complement.cpp 

obj/basic.o : src/basic.cpp $(inc)/basic.h $(inc)/region.h
	g++ -o obj/basic.o -c -I$(inc) src/basic.cpp 



obj/region.o : src/region.cpp $(inc)/region.h $(inc)/point.h
	g++ -o obj/region.o -c -I$(inc) src/region.cpp 



obj/point.o : src/point.cpp $(inc)/point.h
	g++ -o obj/point.o -c -I$(inc) src/point.cpp 


clean :
	rm obj/*.obj

realclean : clean
	rm geometry