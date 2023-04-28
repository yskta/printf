//#include "/usr/include/CUnit/CUnit.h"
//#include "/usr/include/CUnit/Automated.h"

//local env & CI env but fail in sonar cloud
#include "CUnit/CUnit.h"
#include "CUnit/Automated.h"

//fail compile
//#include "usr/local/lib/CUnit/CUnit.h"
//#include "usr/local/lib/CUnit/Automated.h"


#include "ft_printf.h"
#include <stdbool.h>

bool test_int();
void test_str();
void test_int_check();

bool test_int()
{
    int i = 0;
    while (i < 10)
    {
        if (ft_printf("result:%d", i) != printf("result:%d", i))
            return (false);
        i++;
    }
    return (true);
}

void test_int_check() {
  CU_ASSERT(test_int()==true);
  return;
}

//void test_str()
//{
//    char *s = "test success";
//    ft_printf("%s\n", s);
//    return ;
//}

int main(void)
{
    CU_pSuite testSuite = NULL;
    CU_initialize_registry();

    testSuite = CU_add_suite("JojoTestSuite", NULL, NULL);
    //test関数
    CU_add_test(testSuite, "Test Int", test_int_check);
    //CU_add_test(testSuite, "Test Str", test_str);
    /* CUnit 実行 */
    CU_automated_run_tests();
    CU_list_tests_to_file();
    /* CUnit 終了処理 */
    CU_cleanup_registry();
    return (0);
}
