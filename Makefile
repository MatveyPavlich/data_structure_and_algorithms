BUILD_DIR = build

main: 
	# gcc -std=c99 -Wall -Werror ./Arrays_and_Hashes/dynamic_array.c -o ./$(BUILD_DIR)/dynamic_array
	# gcc -std=c99 -Wall -Werror ./stack/stack.c -o ./$(BUILD_DIR)/stack
	# gcc -std=c99 -Wall -Werror ./stack/stack_2.c -o ./$(BUILD_DIR)/stack
	# gcc -std=c99 -Wall -Werror ./queue/queue.c -o ./$(BUILD_DIR)/queue
	gcc -std=c99 -Wall -Werror ./trees/bsa.c -o ./$(BUILD_DIR)/bsa

clean:
	rm -rf $(BUILD_DIR)/*

run:
	$(BUILD_DIR)/bsa
