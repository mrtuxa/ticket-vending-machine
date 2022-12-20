default: compile

clean:
	rm -fv a.out fahrkartenautomat

run: clean compile clear runRun

runRun:
	./fahrkartenautomat

clear:
	clear

compile:
	gcc --verbose main.c -o fahrkartenautomat
