
app: app.cpp
	g++ --coverage app.cpp -o app

clean:
	@rm -f app *.o *.gcno *.gcda

.PHONY: clean
