BUILD_DIR = build

main: 
	# gcc -std=c99 -Wall -Werror ./Arrays_and_Hashes/dynamic_array.c -o ./$(BUILD_DIR)/dynamic_array
	# gcc -std=c99 -Wall -Werror ./stack/stack.c -o ./$(BUILD_DIR)/stack
	# gcc -std=c99 -Wall -Werror ./stack/stack_2.c -o ./$(BUILD_DIR)/stack
	# gcc -std=c99 -Wall -Werror ./queue/queue.c -o ./$(BUILD_DIR)/queue
	# gcc -std=c99 -Wall -Werror ./trees/bsa.c -o ./$(BUILD_DIR)/bsa
	# gcc -std=c99 -Wall -Werror ./trees/binary_tree_try_2.c -o ./$(BUILD_DIR)/binary_tree_try_2
	# gcc -std=c99 -Wall -Werror ./linked_list/linked_list.c -o ./$(BUILD_DIR)/linked_list
	# gcc -std=c99 -Wall -Werror ./linked_list/linked_list_v2.c -o ./$(BUILD_DIR)/linked_list_v2 -g
	gcc -std=c99 -Wall -Werror ./linked_list/linked_list_v3.c -o ./$(BUILD_DIR)/linked_list_v3 -g
	# gcc -std=c99 -Wall -Werror ./linked_list/linked_list_array_based.c -o ./$(BUILD_DIR)/linked_list_array_based -g
	# gcc -std=c99 -Wall -Werror ./linked_list/linked_list_array_based_v2.c -o ./$(BUILD_DIR)/linked_list_array_based_v2 -g
	# gcc -std=c99 -Wall -Werror ./stack/stack_array_based.c -o ./$(BUILD_DIR)/stack_array_based -g
	# gcc -std=c99 -Wall -Werror ./stack/stack_array_based_2.c -o ./$(BUILD_DIR)/stack_array_based_2 -g
	gcc -std=c99 -Wall -Werror ./bitwise_operations/bitwise_operations.c -o ./$(BUILD_DIR)/bitwise_operations -g

clean:
	rm -rf $(BUILD_DIR)/*

run:
	$(BUILD_DIR)/linked_list_v3

debug:
	@gdb -q \
	    -iex 'set auto-load local-gdbinit on' \
	    -iex 'set auto-load safe-path $$debugdir:$$datadir/auto-load:$(PWD)' \
	    ./$(BUILD_DIR)/linked_list_array_based_v2


