all: factorial lab3_ex2_assembly list_map
.PHONY: all clean

factorial: factorial.s
	@echo "Checking Factorial..."
	@echo "6 720 5040 40320" > factorial_expected.txt
<<<<<<< HEAD
	@java -jar venus-jvm-latest.jar factorial.s > factorial_actual.txt
=======
	@java -jar ../venus-jvm-latest.jar factorial.s > factorial_actual.txt
>>>>>>> ddb1b411c03b767f7c403c4160829cdacdf052e4
	@diff -w factorial_expected.txt factorial_actual.txt
	@echo "Success!"

lab3_ex2_assembly: lab3_ex2_assembly.s
	@echo "Checking Exercise 2..."
	@echo "3 1 4 1 5 9\n6 1 8 1 10 1" > lab3_ex2_assembly_expected.txt
<<<<<<< HEAD
	@java -jar venus-jvm-latest.jar lab3_ex2_assembly.s > lab3_ex2_assembly_actual.txt
=======
	@java -jar ../venus-jvm-latest.jar lab3_ex2_assembly.s > lab3_ex2_assembly_actual.txt
>>>>>>> ddb1b411c03b767f7c403c4160829cdacdf052e4
	@diff -w lab3_ex2_assembly_expected.txt lab3_ex2_assembly_actual.txt
	@echo "Success!"

list_map: list_map.s
	@echo "Checking list_map..."
	@echo "9 8 7 6 5 4 3 2 1 0\n81 64 49 36 25 16 9 4 1 0" > list_map_expected.txt
<<<<<<< HEAD
	@java -jar venus-jvm-latest.jar list_map.s > list_map_actual.txt
=======
	@java -jar ../venus-jvm-latest.jar list_map.s > list_map_actual.txt
>>>>>>> ddb1b411c03b767f7c403c4160829cdacdf052e4
	@diff -w list_map_expected.txt list_map_actual.txt
	@echo "Success!"

clean:
	@rm -f factorial_expected.txt factorial_actual.txt
	@rm -f lab3_ex2_assembly_expected.txt lab3_ex2_assembly_actual.txt
	@rm -f list_map_expected.txt list_map_actual.txt