BUILD_DIR = build

main: 
	gcc -std=c99 -Wall -Werror ./Arrays_and_Hashes/dynamic_array.c -o ./$(BUILD_DIR)/dynamic_array

clean:
	rm -rf $(BUILD_DIR)/*

run:
	$(BUILD_DIR)/dynamic_array