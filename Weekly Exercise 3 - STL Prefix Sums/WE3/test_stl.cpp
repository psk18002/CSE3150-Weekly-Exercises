#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "stl.h"

TEST_CASE("TEXT FILE INPUT") {
    SUBCASE("LOADING STACK") {
        stack<int> s;
        file_input_stack("input.txt", s);
        CHECK_EQ(s.empty(), false);
    }

    SUBCASE("LOADING QUEUE") {
        queue<int> q;
        file_input_queue("input.txt", q);
        CHECK_EQ(q.empty(), false);
    }
}

TEST_CASE("ARRAY COPY OF STL") {
    SUBCASE("COPY OF STACK") {
        stack<int> s;
        int s_array[4];
        s.push(4);
        s.push(1);
        s.push(6);
        s.push(7);
        stack_array_copy(s, s_array);
        int expected_s_array[] = {4, 1, 6, 7};
        for (int i = 0; i < 4; ++i) {
            CHECK_EQ(s_array[i], expected_s_array[i]);  
        }     
    }

    SUBCASE("COPY OF QUEUE") {
        queue<int> q;
        int q_array[4];
        q.push(4);
        q.push(1);
        q.push(6);
        q.push(7);
        queue_array_copy(q, q_array);
        int expected_q_array[] = {4, 1, 6, 7};
        for (int i = 0; i < 4; ++i) {
            CHECK_EQ(q_array[i], expected_q_array[i]);
        }
    }
}

TEST_CASE("NON-NEG PREFIX SUMS OF ARRAYS CHECK") {
    SUBCASE("STACK-ARRAY PREFIX SUMS") {
        stack<int> s;
        int s_array[4];
        s.push(4);
        s.push(1);
        s.push(6);
        s.push(7);
        stack_array_copy(s, s_array);
        CHECK_EQ(non_neg_prefix_sum(s_array, 4), true);

        s = stack<int>();
        int s_array2[4];
        s.push(0);
        s.push(4);
        s.push(-5);
        s.push(2);
        stack_array_copy(s, s_array2);
        CHECK_EQ(non_neg_prefix_sum(s_array2, 4), false);          
    }

    SUBCASE("QUEUE-ARRAY PREFIX SUMS") {
        queue<int> q;
        int q_array[4];
        q.push(4);
        q.push(1);
        q.push(6);
        q.push(7);
        queue_array_copy(q, q_array);
        CHECK_EQ(non_neg_prefix_sum(q_array, 4), true);

        q = queue<int>();
        int q_array2[4];
        q.push(0);
        q.push(4);
        q.push(-5);
        q.push(2);
        queue_array_copy(q, q_array2);
        CHECK_EQ(non_neg_prefix_sum(q_array2, 4), false);  
    }
}