# Define the all rule
# 	Compile the source file to the object file
# 	Link the object file to the final executable (sayhello)
all:
	gcc -c helloworld.c -o helloworld.o
	gcc helloworld.o -o sayhello

# Define the clean rule
# 	Remove all the object files
# 	Remove the final executable (sayhello)
clean:
	$(RM) *.o
	$(RM) sayhello
