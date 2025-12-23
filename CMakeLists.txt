cmake_minimum_required(VERSION 4.0)
project(data_structure)

set(CMAKE_CXX_STANDARD 14)

add_executable(func_calculation complexity/func_calculation.cpp)
add_executable(ring_road complexity/ring_road.cpp)
add_executable(conv_travel complexity/conv_travel.cpp
        complexity/arithmetic_mean.cpp
        complexity/polycarp_and_coins.cpp
        complexity/avg_stat_elements.cpp)
add_executable(win_lottery complexity/win_lottery.cpp)
add_executable(sum_for_dummies complexity/sum_for_dummies.cpp)

add_executable(count_results E/count_results.cpp)
add_executable(abstract E/abstract.cpp
        "iterators/min_and max.cpp"
        "iterators/looking _for_elements.cpp"
        iterators/copy_and_sum.cpp
        linked_list/linked_list.cpp
        linked_list/round_dance.cpp
        linked_list/queue.cpp
        linked_list/decoding_num_seq.cpp
        linked_list/psychos_ine_up.cpp
        stacks/stacks.cpp
        "stacks/min_in_stack .cpp"
        stacks/multistack.cpp
        "stacks/multistack_complex .cpp"
        "stacks/paired_parentheses .cpp"
        stacks/nearest_smaller_largest.cpp
        "stacks/largest_rectangle .cpp"
        stacks/replace_to_correct_bracket_seq.cpp
        "stacks/cd_pwd_commands .cpp"
        "stacks/escape_from_stones .cpp"
        "stacks/playing_with_string .cpp"
        queues/queues.cpp
        "queues/two_way_queue .cpp"
        "queues/max_in_queues .cpp"
        "queues/max_in_window .cpp"
        "queues/queue_and_k_position .cpp"
        "queues/queue_at_clinic .cpp"
        "queues/jzzhu_and_children .cpp"
        queues/table_tennis.cpp
        "trees /dictionary.cpp"
        "trees /multiple.cpp"
        "trees /binary_tree .cpp"
        "trees /binary_tree_query .cpp"
        "trees /balanced_binary_search_tree .cpp"
        "trees /parents_and_children .cpp"
        "trees /unbalanced_search_tree .cpp"
        "trees /knight_tournament.cpp"
        "trees /cutting_glass .cpp"
        "dictionary /calculate_meanings .cpp"
        "dictionary /secret_santa .cpp"
        "dictionary /positions_in_permutation .cpp"
        "dictionary /restore_array .cpp"
        "dictionary /find_positions .cpp"
        "dictionary /amount_of_three.cpp"
        "dictionary /anya_and_smartphone .cpp"
        "dictionary /dragons.cpp"
        "dictionary /mike_and_kids.cpp"
        "hash_tables/dictionary_hash_table .cpp"
        "hash_tables/set_hash_table .cpp"
        "hash_tables/word_count .cpp"
        "hash_tables/attendance_statistics .cpp"
        hash_tables/attendance_statistics_complex.cpp
        "hash_tables/unique_names .cpp"
        hash_tables/anagrams.cpp
        "hash_tables/update_login .cpp"
        "hash_tables/chat_order .cpp"
        hash_tables/guardians.cpp
        "sorting/sorting_integers.cpp"
        "sorting/sorting_rows.cpp"
        "sorting/petya_and_lines.cpp"
        sorting/friendly_sorting.cpp
        sorting/sorting_by_sum.cpp
        sorting/sort_by_relation.cpp
        sorting/old_cipher.cpp
        sorting/sorting_array.cpp
        sorting/lexicograph_max_subseq.cpp
        sorting/cyclic_shift_of_letters.cpp
        sorting/shift_and_turn.cpp
        sorting/double_sorting.cpp
        sorting/multitasking.cpp
        sorting/chants_and_permutations.cpp)
add_executable(position_sorting E/position_sorting.cpp)
add_executable(second_max E/second_max.cpp)