#ifndef _HASHMAP_TEST_H
#define _HASHMAP_TEST_H

#include "hashmap_impl.h"

#include <iostream>
using namespace std;

class HashMapTest {
public:
    HashMapTest();

    // 30. Substring with Concatenation of All Words Test
    void findSubstring30Test();

private:
    HashMapImpl* implObj;
};

#endif