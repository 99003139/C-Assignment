all.out: ipaddress.cpp ip_address_test.cpp
	g++ ipaddress.cpp ip_address_test.cpp -lgtest_main -lgtest -lpthread -o all.out

test:
	./all.out

clean:
	rm *.out