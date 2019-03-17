/* AUTOGENERATED FILE. DO NOT EDIT. */

//=======Test Runner Used To Run Each Test Below=====
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  CMock_Init(); \
  if (TEST_PROTECT()) \
  { \
      setUp(); \
      TestFunc(); \
  } \
  if (TEST_PROTECT() && !TEST_IS_IGNORED) \
  { \
    tearDown(); \
    CMock_Verify(); \
  } \
  CMock_Destroy(); \
  UnityConcludeTest(); \
}

//=======Automagically Detected Files To Include=====
#include "unity.h"
#include "cmock.h"
#include <setjmp.h>
#include <stdio.h>
#include "mock_bsp_adc.h"
#include "mock_adc_handler.h"
#include "mock_xc.h"

int GlobalExpectCount;
int GlobalVerifyOrder;
char* GlobalOrderError;

//=======External Functions This Runner Calls=====
extern void setUp(void);
extern void tearDown(void);
extern void test_voltage_get(void);
extern void test_voltage_get_wrong_channel_number(void);


//=======Mock Management=====
static void CMock_Init(void)
{
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
  GlobalOrderError = NULL;
  mock_bsp_adc_Init();
  mock_adc_handler_Init();
  mock_xc_Init();
}
static void CMock_Verify(void)
{
  mock_bsp_adc_Verify();
  mock_adc_handler_Verify();
  mock_xc_Verify();
}
static void CMock_Destroy(void)
{
  mock_bsp_adc_Destroy();
  mock_adc_handler_Destroy();
  mock_xc_Destroy();
}

//=======Test Reset Option=====
void resetTest(void);
void resetTest(void)
{
  CMock_Verify();
  CMock_Destroy();
  tearDown();
  CMock_Init();
  setUp();
}


//=======MAIN=====
int main(void)
{
  UnityBegin("test_appl_adc.c");
  RUN_TEST(test_voltage_get, 74);
  RUN_TEST(test_voltage_get_wrong_channel_number, 107);

  CMock_Guts_MemFreeFinal();
  return (UnityEnd());
}
