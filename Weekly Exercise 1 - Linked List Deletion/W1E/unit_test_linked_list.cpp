#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
/*
  https://hackingcpp.com/cpp/tools/testing_frameworks.html
 */

#include "doctest.h"
#include "linked_list.h"


int zero_linked_list_elts = 0;
struct node * zero_linked_list_elts_null_node = NULL;

int one_element_linked_list = 1;
int data_value_of_initial_linked_list_elt = 1;
struct node * linked_list_one_elt = build_new_linked_list(one_element_linked_list);

int two_element_linked_list = 2;
int data_value_of_second_elt = 2;
struct node * linked_list_two_elts = build_new_linked_list(two_element_linked_list);


TEST_CASE("linked_list testing") {

    SUBCASE("build_new_linked_list") {
        CHECK_EQ(build_new_linked_list(zero_linked_list_elts), zero_linked_list_elts_null_node);
        CHECK_EQ(get_linked_list_data_item_value( 
            linked_list_one_elt,
            one_element_linked_list,
            one_element_linked_list), 
            data_value_of_initial_linked_list_elt);

        CHECK_EQ(get_linked_list_data_item_value( 
            linked_list_two_elts,
            two_element_linked_list,
            two_element_linked_list), 
            data_value_of_second_elt);
    }
}

TEST_CASE("delete_linked_list testing") {
    
    SUBCASE("delete empty list") {
        struct node* empty_list = build_new_linked_list(zero_linked_list_elts);
        CHECK_EQ(empty_list, zero_linked_list_elts_null_node);
        delete_linked_list(empty_list);
        empty_list = nullptr;
        CHECK_EQ(empty_list, nullptr);
        CHECK(empty_list == nullptr);
    }

    SUBCASE("delete linked list w/ one element") {
        struct node * one_element = build_new_linked_list(one_element_linked_list);
        CHECK_EQ(get_linked_list_data_item_value(one_element, 1, 1), data_value_of_initial_linked_list_elt);
        delete_linked_list(one_element);
        CHECK_EQ(one_element, nullptr);
    }

    SUBCASE("delete linked list w/ two elements") {
        struct node * two_elements = build_new_linked_list(two_element_linked_list);
        CHECK_EQ(get_linked_list_data_item_value(two_elements, 2, 2), data_value_of_second_elt);
        delete_linked_list(two_elements);
        CHECK_EQ(two_elements, nullptr);
    }
}