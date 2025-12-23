cmake_minimum_required(VERSION 4.0)
project(data_structure)

set(CMAKE_CXX_STANDARD 14)

# Complexity
add_executable(func_calculation complexity/func_calculation.cpp)
add_executable(ring_road complexity/ring_road.cpp)
add_executable(conv_travel complexity/conv_travel.cpp)
add_executable(arithmetic_mean complexity/arithmetic_mean.cpp)
add_executable(polycarp_and_coins complexity/polycarp_and_coins.cpp)
add_executable(avg_stat_elements complexity/avg_stat_elements.cpp)
add_executable(win_lottery complexity/win_lottery.cpp)
add_executable(sum_for_dummies complexity/sum_for_dummies.cpp)

# E
add_executable(count_results E/count_results.cpp)
add_executable(abstract E/abstract.cpp)
add_executable(position_sorting E/position_sorting.cpp)
add_executable(second_max E/second_max.cpp)

# Iterators
add_executable(min_and_max iterators/min_and max.cpp)
add_executable(looking_for_elements iterators/looking _for_elements.cpp)
add_executable(copy_and_sum iterators/copy_and_sum.cpp)

# Linked List
add_executable(linked_list linked_list/linked_list.cpp)
add_executable(round_dance linked_list/round_dance.cpp)
add_executable(linked_list_queue linked_list/queue.cpp)
add_executable(decoding_num_seq linked_list/decoding_num_seq.cpp)
add_executable(psychos_ine_up linked_list/psychos_ine_up.cpp)

# Stacks
add_executable(stacks stacks/stacks.cpp)
add_executable(min_in_stack stacks/min_in_stack.cpp)
add_executable(multistack stacks/multistack.cpp)
add_executable(multistack_complex stacks/multistack_complex.cpp)
add_executable(paired_parentheses stacks/paired_parentheses.cpp)
add_executable(nearest_smaller_largest stacks/nearest_smaller_largest.cpp)
add_executable(largest_rectangle stacks/largest_rectangle.cpp)
add_executable(replace_to_correct_bracket_seq stacks/replace_to_correct_bracket_seq.cpp)
add_executable(cd_pwd_commands stacks/cd_pwd_commands.cpp)
add_executable(escape_from_stones stacks/escape_from_stones.cpp)
add_executable(playing_with_string stacks/playing_with_string.cpp)

# Queues
add_executable(queues queues/queues.cpp)
add_executable(two_way_queue queues/two_way_queue.cpp)
add_executable(max_in_queues queues/max_in_queues.cpp)
add_executable(max_in_window queues/max_in_window.cpp)
add_executable(queue_and_k_position queues/queue_and_k_position.cpp)
add_executable(queue_at_clinic queues/queue_at_clinic.cpp)
add_executable(jzzhu_and_children queues/jzzhu_and_children.cpp)
add_executable(table_tennis queues/table_tennis.cpp)

# Trees
add_executable(dictionary_tree trees /dictionary.cpp)
add_executable(multiple_tree trees /multiple.cpp)
add_executable(binary_tree trees /binary_tree.cpp)
add_executable(binary_tree_query trees /binary_tree_query.cpp)
add_executable(balanced_binary_search_tree trees /balanced_binary_search_tree.cpp)
add_executable(parents_and_children trees /parents_and_children.cpp)
add_executable(unbalanced_search_tree trees /unbalanced_search_tree.cpp)
add_executable(knight_tournament trees /knight_tournament.cpp)
add_executable(cutting_glass trees /cutting_glass.cpp)

# Dictionary
add_executable(calculate_meanings dictionary /calculate_meanings.cpp)
add_executable(secret_santa dictionary /secret_santa.cpp)
add_executable(positions_in_permutation dictionary /positions_in_permutation.cpp)
add_executable(restore_array dictionary /restore_array.cpp)
add_executable(find_positions_dict dictionary /find_positions.cpp)
add_executable(amount_of_three dictionary /amount_of_three.cpp)
add_executable(anya_and_smartphone dictionary /anya_and_smartphone.cpp)
add_executable(dragons dictionary /dragons.cpp)
add_executable(mike_and_kids dictionary /mike_and_kids.cpp)

# Hash Tables
add_executable(dictionary_hash_table hash_tables/dictionary_hash_table.cpp)
add_executable(set_hash_table hash_tables/set_hash_table.cpp)
add_executable(word_count hash_tables/word_count.cpp)
add_executable(attendance_statistics hash_tables/attendance_statistics.cpp)
add_executable(attendance_statistics_complex hash_tables/attendance_statistics_complex.cpp)
add_executable(unique_names hash_tables/unique_names.cpp)
add_executable(anagrams hash_tables/anagrams.cpp)
add_executable(update_login hash_tables/update_login.cpp)
add_executable(chat_order hash_tables/chat_order.cpp)
add_executable(guardians hash_tables/guardians.cpp)

# Sorting
add_executable(sorting_integers sorting/sorting_integers.cpp)
add_executable(sorting_rows sorting/sorting_rows.cpp)
add_executable(petya_and_lines sorting/petya_and_lines.cpp)
add_executable(friendly_sorting sorting/friendly_sorting.cpp)
add_executable(sorting_by_sum sorting/sorting_by_sum.cpp)
add_executable(sort_by_relation sorting/sort_by_relation.cpp)
add_executable(old_cipher sorting/old_cipher.cpp)
add_executable(sorting_array sorting/sorting_array.cpp)
add_executable(lexicograph_max_subseq sorting/lexicograph_max_subseq.cpp)
add_executable(cyclic_shift_of_letters sorting/cyclic_shift_of_letters.cpp)
add_executable(shift_and_turn sorting/shift_and_turn.cpp)
add_executable(double_sorting sorting/double_sorting.cpp)
add_executable(multitasking sorting/multitasking.cpp)
add_executable(chants_and_permutations sorting/chants_and_permutations.cpp)

# Priority Queues
add_executable(priority_queue priority_queues/priority_queue.cpp)
add_executable(priority_queue_deletions priority_queues/priority_queue_deletions.cpp)
add_executable(k_ordinal_stat priority_queues/k_ordinal_stat.cpp)
add_executable(k_order_stati_min_removal priority_queues/k_order_stati_min_removal.cpp)
add_executable(heap_operations priority_queues/heap_operations.cpp)
add_executable(characteristic_bus priority_queues/characteristic_bus.cpp)
add_executable(huffman_coding priority_queues/huffman_coding.cpp)
add_executable(huffman_decoding priority_queues/huffman_decoding.cpp)