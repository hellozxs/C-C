my_list:list.h test.cpp
	g++ list.h test.cpp -o my_list

.PHONY:clean
clean:
	rm my_list
