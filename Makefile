app: app.cpp
	g++ app.cpp -o app

clean:
	@rm -f app *.o

.PHONY: clean
