default: Add.java
	javac Add.java
	javac Add.java -h jniH
	cp jniH/Add.h .
	g++ -fPIC -I/usr/local/java/jdk-12.0.1/include/ -I/usr/local/java/jdk-12.0.1/include/linux/ -shared -o libTwoNo.so Add.cpp -ITwoNo
	javac Add.java
	java Add
clean:
	rm -f Add.class Add.h libTwoNo.so
	rm -rf jniH
