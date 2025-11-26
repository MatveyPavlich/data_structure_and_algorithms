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
	# gcc -std=c99 -Wall -Werror ./linked_list/linked_list_v3.c -o ./$(BUILD_DIR)/linked_list_v3 -g
	# gcc -std=c99 -Wall -Werror ./linked_list/linked_list_array_based.c -o ./$(BUILD_DIR)/linked_list_array_based -g
	# gcc -std=c99 -Wall -Werror ./linked_list/linked_list_array_based_v2.c -o ./$(BUILD_DIR)/linked_list_array_based_v2 -g
	# gcc -std=c99 -Wall -Werror ./stack/stack_array_based.c -o ./$(BUILD_DIR)/stack_array_based -g
	# gcc -std=c99 -Wall -Werror ./stack/stack_array_based_2.c -o ./$(BUILD_DIR)/stack_array_based_2 -g
	# gcc -std=c99 -Wall -Werror ./bitwise_operations/bitwise_operations.c -o ./$(BUILD_DIR)/bitwise_operations -g
	# gcc -std=c99 -Wall -Werror ./queue/queue_v2.c -o ./$(BUILD_DIR)/queue_v2 -g
	# gcc -std=c99 -Wall -Werror ./trees/bsa_try_2.c -o ./$(BUILD_DIR)/bsa_try_2
	# gcc -std=c99 -Wall -Werror ./arrays/dynamic_array_2.c -o ./$(BUILD_DIR)/dynamic_array_2
	# gcc -std=c99 -Wall -Werror ./hash_table/hash_table_1.c -o ./$(BUILD_DIR)/hash_table_1
	# gcc -std=c99 -Wall -Werror ./codeforces/4A_waterlemon.c -o ./$(BUILD_DIR)/4A_waterlemon
	# gcc -std=c99 -Wall -Werror ./codeforces/71A_way_too_long_words.c -o ./$(BUILD_DIR)/71A_way_too_long_words
	# gcc -std=c99 -Wall -Werror ./codeforces/4A_try_2.c -o ./$(BUILD_DIR)/output
	gcc -std=c99 -Wall -Werror ./codeforces/427A.c -o ./$(BUILD_DIR)/output
clean:
	rm -rf $(BUILD_DIR)/*

run:
	$(BUILD_DIR)/output

debug:
	@gdb -q \
	    -iex 'set auto-load local-gdbinit on' \
	    -iex 'set auto-load safe-path $$debugdir:$$datadir/auto-load:$(PWD)' \
	    ./$(BUILD_DIR)/linked_list_array_based_v2


