/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "cmock.h"
#include "Mockfwk_arch.h"

static const char* CMockString_driver = "driver";
static const char* CMockString_fwk_arch_init = "fwk_arch_init";
static const char* CMockString_fwk_arch_suspend = "fwk_arch_suspend";

typedef struct _CMOCK_fwk_arch_init_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  char ExpectAnyArgsBool;
  int ReturnVal;
  const struct fwk_arch_init_driver* Expected_driver;

} CMOCK_fwk_arch_init_CALL_INSTANCE;

typedef struct _CMOCK_fwk_arch_suspend_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  char ExpectAnyArgsBool;

} CMOCK_fwk_arch_suspend_CALL_INSTANCE;

static struct Mockfwk_archInstance
{
  CMOCK_MEM_INDEX_TYPE fwk_arch_init_CallInstance;
  CMOCK_MEM_INDEX_TYPE fwk_arch_suspend_CallInstance;
} Mock;

extern jmp_buf AbortFrame;

void Mockfwk_arch_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_MEM_INDEX_TYPE call_instance;
  call_instance = Mock.fwk_arch_init_CallInstance;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_fwk_arch_init);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  call_instance = Mock.fwk_arch_suspend_CallInstance;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_fwk_arch_suspend);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
}

void Mockfwk_arch_Init(void)
{
  Mockfwk_arch_Destroy();
}

void Mockfwk_arch_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
}

int fwk_arch_init(const struct fwk_arch_init_driver* driver)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_fwk_arch_init_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_fwk_arch_init);
  cmock_call_instance = (CMOCK_fwk_arch_init_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.fwk_arch_init_CallInstance);
  Mock.fwk_arch_init_CallInstance = CMock_Guts_MemNext(Mock.fwk_arch_init_CallInstance);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (!cmock_call_instance->ExpectAnyArgsBool)
  {
  {
    UNITY_SET_DETAILS(CMockString_fwk_arch_init,CMockString_driver);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(cmock_call_instance->Expected_driver), (void*)(driver), sizeof(const struct fwk_arch_init_driver), cmock_line, CMockStringMismatch);
  }
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_fwk_arch_init(CMOCK_fwk_arch_init_CALL_INSTANCE* cmock_call_instance, const struct fwk_arch_init_driver* driver);
void CMockExpectParameters_fwk_arch_init(CMOCK_fwk_arch_init_CALL_INSTANCE* cmock_call_instance, const struct fwk_arch_init_driver* driver)
{
  cmock_call_instance->Expected_driver = driver;
}

void fwk_arch_init_CMockExpectAnyArgsAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_fwk_arch_init_CALL_INSTANCE));
  CMOCK_fwk_arch_init_CALL_INSTANCE* cmock_call_instance = (CMOCK_fwk_arch_init_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.fwk_arch_init_CallInstance = CMock_Guts_MemChain(Mock.fwk_arch_init_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
  cmock_call_instance->ReturnVal = cmock_to_return;
  cmock_call_instance->ExpectAnyArgsBool = (char)1;
}

void fwk_arch_init_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, const struct fwk_arch_init_driver* driver, int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_fwk_arch_init_CALL_INSTANCE));
  CMOCK_fwk_arch_init_CALL_INSTANCE* cmock_call_instance = (CMOCK_fwk_arch_init_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.fwk_arch_init_CallInstance = CMock_Guts_MemChain(Mock.fwk_arch_init_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
  CMockExpectParameters_fwk_arch_init(cmock_call_instance, driver);
  cmock_call_instance->ReturnVal = cmock_to_return;
}

void fwk_arch_suspend(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_fwk_arch_suspend_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_fwk_arch_suspend);
  cmock_call_instance = (CMOCK_fwk_arch_suspend_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.fwk_arch_suspend_CallInstance);
  Mock.fwk_arch_suspend_CallInstance = CMock_Guts_MemNext(Mock.fwk_arch_suspend_CallInstance);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  UNITY_CLR_DETAILS();
}

void fwk_arch_suspend_CMockExpect(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_fwk_arch_suspend_CALL_INSTANCE));
  CMOCK_fwk_arch_suspend_CALL_INSTANCE* cmock_call_instance = (CMOCK_fwk_arch_suspend_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.fwk_arch_suspend_CallInstance = CMock_Guts_MemChain(Mock.fwk_arch_suspend_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
}

