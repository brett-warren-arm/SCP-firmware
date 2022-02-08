/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "cmock.h"
#include "Mockfwk_core.h"

static const char* CMockString_cookie = "cookie";
static const char* CMockString_event = "event";
static const char* CMockString_fwk_get_delayed_response = "fwk_get_delayed_response";
static const char* CMockString_fwk_get_first_delayed_response = "fwk_get_first_delayed_response";
static const char* CMockString_fwk_is_delayed_response_list_empty = "fwk_is_delayed_response_list_empty";
static const char* CMockString_id = "id";
static const char* CMockString_is_empty = "is_empty";

typedef struct _CMOCK_fwk_get_delayed_response_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  char ExpectAnyArgsBool;
  int ReturnVal;
  fwk_id_t Expected_id;
  uint32_t Expected_cookie;
  struct fwk_event* Expected_event;

} CMOCK_fwk_get_delayed_response_CALL_INSTANCE;

typedef struct _CMOCK_fwk_is_delayed_response_list_empty_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  char ExpectAnyArgsBool;
  int ReturnVal;
  fwk_id_t Expected_id;
  bool* Expected_is_empty;

} CMOCK_fwk_is_delayed_response_list_empty_CALL_INSTANCE;

typedef struct _CMOCK_fwk_get_first_delayed_response_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  char ExpectAnyArgsBool;
  int ReturnVal;
  fwk_id_t Expected_id;
  struct fwk_event* Expected_event;

} CMOCK_fwk_get_first_delayed_response_CALL_INSTANCE;

static struct Mockfwk_coreInstance
{
  CMOCK_MEM_INDEX_TYPE fwk_get_delayed_response_CallInstance;
  CMOCK_MEM_INDEX_TYPE fwk_is_delayed_response_list_empty_CallInstance;
  CMOCK_MEM_INDEX_TYPE fwk_get_first_delayed_response_CallInstance;
} Mock;

extern jmp_buf AbortFrame;

void Mockfwk_core_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_MEM_INDEX_TYPE call_instance;
  call_instance = Mock.fwk_get_delayed_response_CallInstance;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_fwk_get_delayed_response);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  call_instance = Mock.fwk_is_delayed_response_list_empty_CallInstance;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_fwk_is_delayed_response_list_empty);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  call_instance = Mock.fwk_get_first_delayed_response_CallInstance;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_fwk_get_first_delayed_response);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
}

void Mockfwk_core_Init(void)
{
  Mockfwk_core_Destroy();
}

void Mockfwk_core_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
}

int fwk_get_delayed_response(fwk_id_t id, uint32_t cookie, struct fwk_event* event)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_fwk_get_delayed_response_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_fwk_get_delayed_response);
  cmock_call_instance = (CMOCK_fwk_get_delayed_response_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.fwk_get_delayed_response_CallInstance);
  Mock.fwk_get_delayed_response_CallInstance = CMock_Guts_MemNext(Mock.fwk_get_delayed_response_CallInstance);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (!cmock_call_instance->ExpectAnyArgsBool)
  {
  {
    UNITY_SET_DETAILS(CMockString_fwk_get_delayed_response,CMockString_id);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(&cmock_call_instance->Expected_id), (void*)(&id), sizeof(fwk_id_t), cmock_line, CMockStringMismatch);
  }
  {
    UNITY_SET_DETAILS(CMockString_fwk_get_delayed_response,CMockString_cookie);
    UNITY_TEST_ASSERT_EQUAL_HEX32(cmock_call_instance->Expected_cookie, cookie, cmock_line, CMockStringMismatch);
  }
  {
    UNITY_SET_DETAILS(CMockString_fwk_get_delayed_response,CMockString_event);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(cmock_call_instance->Expected_event), (void*)(event), sizeof(struct fwk_event), cmock_line, CMockStringMismatch);
  }
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_fwk_get_delayed_response(CMOCK_fwk_get_delayed_response_CALL_INSTANCE* cmock_call_instance, fwk_id_t id, uint32_t cookie, struct fwk_event* event);
void CMockExpectParameters_fwk_get_delayed_response(CMOCK_fwk_get_delayed_response_CALL_INSTANCE* cmock_call_instance, fwk_id_t id, uint32_t cookie, struct fwk_event* event)
{
  memcpy((void*)(&cmock_call_instance->Expected_id), (void*)(&id),
         sizeof(fwk_id_t[sizeof(id) == sizeof(fwk_id_t) ? 1 : -1])); /* add fwk_id_t to :treat_as_array if this causes an error */
  cmock_call_instance->Expected_cookie = cookie;
  cmock_call_instance->Expected_event = event;
}

void fwk_get_delayed_response_CMockExpectAnyArgsAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_fwk_get_delayed_response_CALL_INSTANCE));
  CMOCK_fwk_get_delayed_response_CALL_INSTANCE* cmock_call_instance = (CMOCK_fwk_get_delayed_response_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.fwk_get_delayed_response_CallInstance = CMock_Guts_MemChain(Mock.fwk_get_delayed_response_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
  cmock_call_instance->ReturnVal = cmock_to_return;
  cmock_call_instance->ExpectAnyArgsBool = (char)1;
}

void fwk_get_delayed_response_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, fwk_id_t id, uint32_t cookie, struct fwk_event* event, int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_fwk_get_delayed_response_CALL_INSTANCE));
  CMOCK_fwk_get_delayed_response_CALL_INSTANCE* cmock_call_instance = (CMOCK_fwk_get_delayed_response_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.fwk_get_delayed_response_CallInstance = CMock_Guts_MemChain(Mock.fwk_get_delayed_response_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
  CMockExpectParameters_fwk_get_delayed_response(cmock_call_instance, id, cookie, event);
  cmock_call_instance->ReturnVal = cmock_to_return;
}

int fwk_is_delayed_response_list_empty(fwk_id_t id, bool* is_empty)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_fwk_is_delayed_response_list_empty_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_fwk_is_delayed_response_list_empty);
  cmock_call_instance = (CMOCK_fwk_is_delayed_response_list_empty_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.fwk_is_delayed_response_list_empty_CallInstance);
  Mock.fwk_is_delayed_response_list_empty_CallInstance = CMock_Guts_MemNext(Mock.fwk_is_delayed_response_list_empty_CallInstance);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (!cmock_call_instance->ExpectAnyArgsBool)
  {
  {
    UNITY_SET_DETAILS(CMockString_fwk_is_delayed_response_list_empty,CMockString_id);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(&cmock_call_instance->Expected_id), (void*)(&id), sizeof(fwk_id_t), cmock_line, CMockStringMismatch);
  }
  {
    UNITY_SET_DETAILS(CMockString_fwk_is_delayed_response_list_empty,CMockString_is_empty);
    if (cmock_call_instance->Expected_is_empty == NULL)
      { UNITY_TEST_ASSERT_NULL(is_empty, cmock_line, CMockStringExpNULL); }
    else
      { UNITY_TEST_ASSERT_EQUAL_INT_ARRAY(cmock_call_instance->Expected_is_empty, is_empty, 1, cmock_line, CMockStringMismatch); }
  }
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_fwk_is_delayed_response_list_empty(CMOCK_fwk_is_delayed_response_list_empty_CALL_INSTANCE* cmock_call_instance, fwk_id_t id, bool* is_empty);
void CMockExpectParameters_fwk_is_delayed_response_list_empty(CMOCK_fwk_is_delayed_response_list_empty_CALL_INSTANCE* cmock_call_instance, fwk_id_t id, bool* is_empty)
{
  memcpy((void*)(&cmock_call_instance->Expected_id), (void*)(&id),
         sizeof(fwk_id_t[sizeof(id) == sizeof(fwk_id_t) ? 1 : -1])); /* add fwk_id_t to :treat_as_array if this causes an error */
  cmock_call_instance->Expected_is_empty = is_empty;
}

void fwk_is_delayed_response_list_empty_CMockExpectAnyArgsAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_fwk_is_delayed_response_list_empty_CALL_INSTANCE));
  CMOCK_fwk_is_delayed_response_list_empty_CALL_INSTANCE* cmock_call_instance = (CMOCK_fwk_is_delayed_response_list_empty_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.fwk_is_delayed_response_list_empty_CallInstance = CMock_Guts_MemChain(Mock.fwk_is_delayed_response_list_empty_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
  cmock_call_instance->ReturnVal = cmock_to_return;
  cmock_call_instance->ExpectAnyArgsBool = (char)1;
}

void fwk_is_delayed_response_list_empty_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, fwk_id_t id, bool* is_empty, int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_fwk_is_delayed_response_list_empty_CALL_INSTANCE));
  CMOCK_fwk_is_delayed_response_list_empty_CALL_INSTANCE* cmock_call_instance = (CMOCK_fwk_is_delayed_response_list_empty_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.fwk_is_delayed_response_list_empty_CallInstance = CMock_Guts_MemChain(Mock.fwk_is_delayed_response_list_empty_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
  CMockExpectParameters_fwk_is_delayed_response_list_empty(cmock_call_instance, id, is_empty);
  cmock_call_instance->ReturnVal = cmock_to_return;
}

int fwk_get_first_delayed_response(fwk_id_t id, struct fwk_event* event)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_fwk_get_first_delayed_response_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_fwk_get_first_delayed_response);
  cmock_call_instance = (CMOCK_fwk_get_first_delayed_response_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.fwk_get_first_delayed_response_CallInstance);
  Mock.fwk_get_first_delayed_response_CallInstance = CMock_Guts_MemNext(Mock.fwk_get_first_delayed_response_CallInstance);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (!cmock_call_instance->ExpectAnyArgsBool)
  {
  {
    UNITY_SET_DETAILS(CMockString_fwk_get_first_delayed_response,CMockString_id);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(&cmock_call_instance->Expected_id), (void*)(&id), sizeof(fwk_id_t), cmock_line, CMockStringMismatch);
  }
  {
    UNITY_SET_DETAILS(CMockString_fwk_get_first_delayed_response,CMockString_event);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(cmock_call_instance->Expected_event), (void*)(event), sizeof(struct fwk_event), cmock_line, CMockStringMismatch);
  }
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_fwk_get_first_delayed_response(CMOCK_fwk_get_first_delayed_response_CALL_INSTANCE* cmock_call_instance, fwk_id_t id, struct fwk_event* event);
void CMockExpectParameters_fwk_get_first_delayed_response(CMOCK_fwk_get_first_delayed_response_CALL_INSTANCE* cmock_call_instance, fwk_id_t id, struct fwk_event* event)
{
  memcpy((void*)(&cmock_call_instance->Expected_id), (void*)(&id),
         sizeof(fwk_id_t[sizeof(id) == sizeof(fwk_id_t) ? 1 : -1])); /* add fwk_id_t to :treat_as_array if this causes an error */
  cmock_call_instance->Expected_event = event;
}

void fwk_get_first_delayed_response_CMockExpectAnyArgsAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_fwk_get_first_delayed_response_CALL_INSTANCE));
  CMOCK_fwk_get_first_delayed_response_CALL_INSTANCE* cmock_call_instance = (CMOCK_fwk_get_first_delayed_response_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.fwk_get_first_delayed_response_CallInstance = CMock_Guts_MemChain(Mock.fwk_get_first_delayed_response_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
  cmock_call_instance->ReturnVal = cmock_to_return;
  cmock_call_instance->ExpectAnyArgsBool = (char)1;
}

void fwk_get_first_delayed_response_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, fwk_id_t id, struct fwk_event* event, int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_fwk_get_first_delayed_response_CALL_INSTANCE));
  CMOCK_fwk_get_first_delayed_response_CALL_INSTANCE* cmock_call_instance = (CMOCK_fwk_get_first_delayed_response_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.fwk_get_first_delayed_response_CallInstance = CMock_Guts_MemChain(Mock.fwk_get_first_delayed_response_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
  CMockExpectParameters_fwk_get_first_delayed_response(cmock_call_instance, id, event);
  cmock_call_instance->ReturnVal = cmock_to_return;
}

