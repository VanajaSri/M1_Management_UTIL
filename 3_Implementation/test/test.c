#include "unity.h"
#include "func.h"

void setUp()
{

}
void tearDown()
{
  
}
void test_add_book()
{
    int d;
    int c=2;
    TEST_ASSERT_EQUAL(1,add_book(c));
    
}

int main()
{
  UNITY_BEGIN();
  
  RUN_TEST(test_add_book);
  return UNITY_END();
}