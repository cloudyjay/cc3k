CXX = g++
CXXFLAGS = -g -Wall -MMD
EXEC = Rogue							
SOURCES = ${wildcard *.cc */*.cc */*/*.cc}			
OBJECTS = ${SOURCES:.cc=.o}
DEPENDS = ${OBJECTS:.o=.d}

${EXEC}: ${OBJECTS}
	${CXX} ${CXXFLAGS} ${OBJECTS} -o ${EXEC}

-include ${DEPENDS}

.PHONY: clean

clean: 
	rm ${EXEC} ${DEPENDS} ${OBJECTS}
