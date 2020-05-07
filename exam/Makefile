default: bank

bank.o:
	g++ -c account.cpp checking.cpp creditcard.cpp savings.cpp

bank: 
	g++ -o bank main.cpp account.cpp checking.cpp creditcard.cpp savings.cpp

clean:
	rm -f bank.o bank