#include "logic.h"
#include "unity.h"

void setUp()
{

}
void tearDown()
{

}

void logic_bide()
{
    hexTodec();
}
void logic_bindeci()
{
   binaryTodecimal();
}
void oc_de()
{
    octalTodecimal();
}
void de_bi()
{
    decTobin();
}
void de_oc()
{
    decTooctal();
}
void de_hex()
{
    decTohexa();
}
void bi_hexa()
{
    int m=1;
    TEST_ASSERT_EQUAL(1,binTohexa(m));
}
void bi_oc()
{
    int m=1;
    TEST_ASSERT_EQUAL(1,binary_to_octal(m));
}
void oc_bi()
{
   int  n=7;
   TEST_ASSERT_EQUAL(111,octal_to_binary(n));
}void hex_bi()
{
    hexTobin();
}


int main(void)
{
    UNITY_BEGIN();

    RUN_TEST(logic_bide);
    RUN_TEST(logic_bindeci);
    RUN_TEST(oc_de);
    RUN_TEST(de_bi);
    RUN_TEST(de_oc);
    RUN_TEST(de_hex);
    RUN_TEST(bi_hexa);
    RUN_TEST(bi_oc);
    RUN_TEST(oc_bi);
    RUN_TEST(hex_bi);

    return UNITY_END();
}