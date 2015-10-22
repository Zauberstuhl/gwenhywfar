/**********************************************************
 * This file has been automatically created by "typemaker2"
 * from the file "ct_context.xml".
 * Please do not edit this file, all changes will be lost.
 * Better edit the mentioned source file instead.
 **********************************************************/

#ifdef HAVE_CONFIG_H
# include <config.h>
#endif

#include "ct_context_p.h"

#include <gwenhywfar/misc.h>
#include <gwenhywfar/debug.h>

/* code headers */

/* macro functions */
GWEN_LIST_FUNCTIONS(GWEN_CRYPT_TOKEN_CONTEXT, GWEN_Crypt_Token_Context)
GWEN_LIST2_FUNCTIONS(GWEN_CRYPT_TOKEN_CONTEXT, GWEN_Crypt_Token_Context)
GWEN_INHERIT_FUNCTIONS(GWEN_CRYPT_TOKEN_CONTEXT)


GWEN_CRYPT_TOKEN_CONTEXT *GWEN_Crypt_Token_Context_new(void) {
  GWEN_CRYPT_TOKEN_CONTEXT *p_struct;

  GWEN_NEW_OBJECT(GWEN_CRYPT_TOKEN_CONTEXT, p_struct)
  p_struct->_refCount=1;
  GWEN_INHERIT_INIT(GWEN_CRYPT_TOKEN_CONTEXT, p_struct)
  GWEN_LIST_INIT(GWEN_CRYPT_TOKEN_CONTEXT, p_struct)
  /* members */
  p_struct->id=0;
  p_struct->signKeyId=0;
  p_struct->verifyKeyId=0;
  p_struct->encipherKeyId=0;
  p_struct->decipherKeyId=0;
  p_struct->authSignKeyId=0;
  p_struct->authVerifyKeyId=0;
  p_struct->tempSignKeyId=0;
  p_struct->serviceId=NULL;
  p_struct->userId=NULL;
  p_struct->customerId=NULL;
  p_struct->userName=NULL;
  p_struct->peerId=NULL;
  p_struct->peerName=NULL;
  p_struct->address=NULL;
  p_struct->port=0;
  p_struct->systemId=NULL;

  return p_struct;
}

void GWEN_Crypt_Token_Context_free(GWEN_CRYPT_TOKEN_CONTEXT *p_struct) {
  if (p_struct) {
    assert(p_struct->_refCount);
    if (p_struct->_refCount==1) {
      GWEN_INHERIT_FINI(GWEN_CRYPT_TOKEN_CONTEXT, p_struct)
      GWEN_LIST_FINI(GWEN_CRYPT_TOKEN_CONTEXT, p_struct)
      /* members */
      free(p_struct->serviceId);
      free(p_struct->userId);
      free(p_struct->customerId);
      free(p_struct->userName);
      free(p_struct->peerId);
      free(p_struct->peerName);
      free(p_struct->address);
      free(p_struct->systemId);
      p_struct->_refCount=0;
      GWEN_FREE_OBJECT(p_struct);
    }
    else
      p_struct->_refCount--;
  }
}

void GWEN_Crypt_Token_Context_Attach(GWEN_CRYPT_TOKEN_CONTEXT *p_struct) {
  assert(p_struct);
  assert(p_struct->_refCount);
  p_struct->_refCount++;
}

GWEN_CRYPT_TOKEN_CONTEXT *GWEN_Crypt_Token_Context_dup(const GWEN_CRYPT_TOKEN_CONTEXT *p_src) {
  GWEN_CRYPT_TOKEN_CONTEXT *p_struct;

  assert(p_src);
  p_struct=GWEN_Crypt_Token_Context_new();
  /* member "id" */
  p_struct->id=p_src->id;

  /* member "signKeyId" */
  p_struct->signKeyId=p_src->signKeyId;

  /* member "verifyKeyId" */
  p_struct->verifyKeyId=p_src->verifyKeyId;

  /* member "encipherKeyId" */
  p_struct->encipherKeyId=p_src->encipherKeyId;

  /* member "decipherKeyId" */
  p_struct->decipherKeyId=p_src->decipherKeyId;

  /* member "authSignKeyId" */
  p_struct->authSignKeyId=p_src->authSignKeyId;

  /* member "authVerifyKeyId" */
  p_struct->authVerifyKeyId=p_src->authVerifyKeyId;

  /* member "tempSignKeyId" */
  p_struct->tempSignKeyId=p_src->tempSignKeyId;

  /* member "serviceId" */
  if (p_struct->serviceId) {
    free(p_struct->serviceId);
    p_struct->serviceId=NULL;
  }
  if (p_src->serviceId) {
    p_struct->serviceId=strdup(p_src->serviceId);
  }

  /* member "userId" */
  if (p_struct->userId) {
    free(p_struct->userId);
    p_struct->userId=NULL;
  }
  if (p_src->userId) {
    p_struct->userId=strdup(p_src->userId);
  }

  /* member "customerId" */
  if (p_struct->customerId) {
    free(p_struct->customerId);
    p_struct->customerId=NULL;
  }
  if (p_src->customerId) {
    p_struct->customerId=strdup(p_src->customerId);
  }

  /* member "userName" */
  if (p_struct->userName) {
    free(p_struct->userName);
    p_struct->userName=NULL;
  }
  if (p_src->userName) {
    p_struct->userName=strdup(p_src->userName);
  }

  /* member "peerId" */
  if (p_struct->peerId) {
    free(p_struct->peerId);
    p_struct->peerId=NULL;
  }
  if (p_src->peerId) {
    p_struct->peerId=strdup(p_src->peerId);
  }

  /* member "peerName" */
  if (p_struct->peerName) {
    free(p_struct->peerName);
    p_struct->peerName=NULL;
  }
  if (p_src->peerName) {
    p_struct->peerName=strdup(p_src->peerName);
  }

  /* member "address" */
  if (p_struct->address) {
    free(p_struct->address);
    p_struct->address=NULL;
  }
  if (p_src->address) {
    p_struct->address=strdup(p_src->address);
  }

  /* member "port" */
  p_struct->port=p_src->port;

  /* member "systemId" */
  if (p_struct->systemId) {
    free(p_struct->systemId);
    p_struct->systemId=NULL;
  }
  if (p_src->systemId) {
    p_struct->systemId=strdup(p_src->systemId);
  }

  return p_struct;
}

uint32_t GWEN_Crypt_Token_Context_GetId(const GWEN_CRYPT_TOKEN_CONTEXT *p_struct) {
  assert(p_struct);
  return p_struct->id;
}

uint32_t GWEN_Crypt_Token_Context_GetSignKeyId(const GWEN_CRYPT_TOKEN_CONTEXT *p_struct) {
  assert(p_struct);
  return p_struct->signKeyId;
}

uint32_t GWEN_Crypt_Token_Context_GetVerifyKeyId(const GWEN_CRYPT_TOKEN_CONTEXT *p_struct) {
  assert(p_struct);
  return p_struct->verifyKeyId;
}

uint32_t GWEN_Crypt_Token_Context_GetEncipherKeyId(const GWEN_CRYPT_TOKEN_CONTEXT *p_struct) {
  assert(p_struct);
  return p_struct->encipherKeyId;
}

uint32_t GWEN_Crypt_Token_Context_GetDecipherKeyId(const GWEN_CRYPT_TOKEN_CONTEXT *p_struct) {
  assert(p_struct);
  return p_struct->decipherKeyId;
}

uint32_t GWEN_Crypt_Token_Context_GetAuthSignKeyId(const GWEN_CRYPT_TOKEN_CONTEXT *p_struct) {
  assert(p_struct);
  return p_struct->authSignKeyId;
}

uint32_t GWEN_Crypt_Token_Context_GetAuthVerifyKeyId(const GWEN_CRYPT_TOKEN_CONTEXT *p_struct) {
  assert(p_struct);
  return p_struct->authVerifyKeyId;
}

uint32_t GWEN_Crypt_Token_Context_GetTempSignKeyId(const GWEN_CRYPT_TOKEN_CONTEXT *p_struct) {
  assert(p_struct);
  return p_struct->tempSignKeyId;
}

const char *GWEN_Crypt_Token_Context_GetServiceId(const GWEN_CRYPT_TOKEN_CONTEXT *p_struct) {
  assert(p_struct);
  return p_struct->serviceId;
}

const char *GWEN_Crypt_Token_Context_GetUserId(const GWEN_CRYPT_TOKEN_CONTEXT *p_struct) {
  assert(p_struct);
  return p_struct->userId;
}

const char *GWEN_Crypt_Token_Context_GetCustomerId(const GWEN_CRYPT_TOKEN_CONTEXT *p_struct) {
  assert(p_struct);
  return p_struct->customerId;
}

const char *GWEN_Crypt_Token_Context_GetUserName(const GWEN_CRYPT_TOKEN_CONTEXT *p_struct) {
  assert(p_struct);
  return p_struct->userName;
}

const char *GWEN_Crypt_Token_Context_GetPeerId(const GWEN_CRYPT_TOKEN_CONTEXT *p_struct) {
  assert(p_struct);
  return p_struct->peerId;
}

const char *GWEN_Crypt_Token_Context_GetPeerName(const GWEN_CRYPT_TOKEN_CONTEXT *p_struct) {
  assert(p_struct);
  return p_struct->peerName;
}

const char *GWEN_Crypt_Token_Context_GetAddress(const GWEN_CRYPT_TOKEN_CONTEXT *p_struct) {
  assert(p_struct);
  return p_struct->address;
}

int GWEN_Crypt_Token_Context_GetPort(const GWEN_CRYPT_TOKEN_CONTEXT *p_struct) {
  assert(p_struct);
  return p_struct->port;
}

const char *GWEN_Crypt_Token_Context_GetSystemId(const GWEN_CRYPT_TOKEN_CONTEXT *p_struct) {
  assert(p_struct);
  return p_struct->systemId;
}

void GWEN_Crypt_Token_Context_SetId(GWEN_CRYPT_TOKEN_CONTEXT *p_struct, uint32_t p_src) {
  assert(p_struct);
  p_struct->id=p_src;
}

void GWEN_Crypt_Token_Context_SetSignKeyId(GWEN_CRYPT_TOKEN_CONTEXT *p_struct, uint32_t p_src) {
  assert(p_struct);
  p_struct->signKeyId=p_src;
}

void GWEN_Crypt_Token_Context_SetVerifyKeyId(GWEN_CRYPT_TOKEN_CONTEXT *p_struct, uint32_t p_src) {
  assert(p_struct);
  p_struct->verifyKeyId=p_src;
}

void GWEN_Crypt_Token_Context_SetEncipherKeyId(GWEN_CRYPT_TOKEN_CONTEXT *p_struct, uint32_t p_src) {
  assert(p_struct);
  p_struct->encipherKeyId=p_src;
}

void GWEN_Crypt_Token_Context_SetDecipherKeyId(GWEN_CRYPT_TOKEN_CONTEXT *p_struct, uint32_t p_src) {
  assert(p_struct);
  p_struct->decipherKeyId=p_src;
}

void GWEN_Crypt_Token_Context_SetAuthSignKeyId(GWEN_CRYPT_TOKEN_CONTEXT *p_struct, uint32_t p_src) {
  assert(p_struct);
  p_struct->authSignKeyId=p_src;
}

void GWEN_Crypt_Token_Context_SetAuthVerifyKeyId(GWEN_CRYPT_TOKEN_CONTEXT *p_struct, uint32_t p_src) {
  assert(p_struct);
  p_struct->authVerifyKeyId=p_src;
}

void GWEN_Crypt_Token_Context_SetTempSignKeyId(GWEN_CRYPT_TOKEN_CONTEXT *p_struct, uint32_t p_src) {
  assert(p_struct);
  p_struct->tempSignKeyId=p_src;
}

void GWEN_Crypt_Token_Context_SetServiceId(GWEN_CRYPT_TOKEN_CONTEXT *p_struct, const char *p_src) {
  assert(p_struct);
  if (p_struct->serviceId) {
    free(p_struct->serviceId);
  }
  if (p_src) {
    p_struct->serviceId=strdup(p_src);
  }
  else {
    p_struct->serviceId=NULL;
  }
}

void GWEN_Crypt_Token_Context_SetUserId(GWEN_CRYPT_TOKEN_CONTEXT *p_struct, const char *p_src) {
  assert(p_struct);
  if (p_struct->userId) {
    free(p_struct->userId);
  }
  if (p_src) {
    p_struct->userId=strdup(p_src);
  }
  else {
    p_struct->userId=NULL;
  }
}

void GWEN_Crypt_Token_Context_SetCustomerId(GWEN_CRYPT_TOKEN_CONTEXT *p_struct, const char *p_src) {
  assert(p_struct);
  if (p_struct->customerId) {
    free(p_struct->customerId);
  }
  if (p_src) {
    p_struct->customerId=strdup(p_src);
  }
  else {
    p_struct->customerId=NULL;
  }
}

void GWEN_Crypt_Token_Context_SetUserName(GWEN_CRYPT_TOKEN_CONTEXT *p_struct, const char *p_src) {
  assert(p_struct);
  if (p_struct->userName) {
    free(p_struct->userName);
  }
  if (p_src) {
    p_struct->userName=strdup(p_src);
  }
  else {
    p_struct->userName=NULL;
  }
}

void GWEN_Crypt_Token_Context_SetPeerId(GWEN_CRYPT_TOKEN_CONTEXT *p_struct, const char *p_src) {
  assert(p_struct);
  if (p_struct->peerId) {
    free(p_struct->peerId);
  }
  if (p_src) {
    p_struct->peerId=strdup(p_src);
  }
  else {
    p_struct->peerId=NULL;
  }
}

void GWEN_Crypt_Token_Context_SetPeerName(GWEN_CRYPT_TOKEN_CONTEXT *p_struct, const char *p_src) {
  assert(p_struct);
  if (p_struct->peerName) {
    free(p_struct->peerName);
  }
  if (p_src) {
    p_struct->peerName=strdup(p_src);
  }
  else {
    p_struct->peerName=NULL;
  }
}

void GWEN_Crypt_Token_Context_SetAddress(GWEN_CRYPT_TOKEN_CONTEXT *p_struct, const char *p_src) {
  assert(p_struct);
  if (p_struct->address) {
    free(p_struct->address);
  }
  if (p_src) {
    p_struct->address=strdup(p_src);
  }
  else {
    p_struct->address=NULL;
  }
}

void GWEN_Crypt_Token_Context_SetPort(GWEN_CRYPT_TOKEN_CONTEXT *p_struct, int p_src) {
  assert(p_struct);
  p_struct->port=p_src;
}

void GWEN_Crypt_Token_Context_SetSystemId(GWEN_CRYPT_TOKEN_CONTEXT *p_struct, const char *p_src) {
  assert(p_struct);
  if (p_struct->systemId) {
    free(p_struct->systemId);
  }
  if (p_src) {
    p_struct->systemId=strdup(p_src);
  }
  else {
    p_struct->systemId=NULL;
  }
}

GWEN_CRYPT_TOKEN_CONTEXT_LIST *GWEN_Crypt_Token_Context_List_dup(const GWEN_CRYPT_TOKEN_CONTEXT_LIST *p_src) {
  GWEN_CRYPT_TOKEN_CONTEXT_LIST *p_dest;
  GWEN_CRYPT_TOKEN_CONTEXT *p_elem;

  assert(p_src);
  p_dest=GWEN_Crypt_Token_Context_List_new();
  p_elem=GWEN_Crypt_Token_Context_List_First(p_src);
  while(p_elem) {
    GWEN_CRYPT_TOKEN_CONTEXT *p_cpy;

    p_cpy=GWEN_Crypt_Token_Context_dup(p_elem);
    GWEN_Crypt_Token_Context_List_Add(p_cpy, p_dest);
    p_elem=GWEN_Crypt_Token_Context_List_Next(p_elem);
  }

  return p_dest;
}

void GWEN_Crypt_Token_Context_ReadDb(GWEN_CRYPT_TOKEN_CONTEXT *p_struct, GWEN_DB_NODE *p_db) {
  assert(p_struct);
  /* member "id" */
  p_struct->id=GWEN_DB_GetIntValue(p_db, "id", 0, 0);

  /* member "signKeyId" */
  p_struct->signKeyId=GWEN_DB_GetIntValue(p_db, "signKeyId", 0, 0);

  /* member "verifyKeyId" */
  p_struct->verifyKeyId=GWEN_DB_GetIntValue(p_db, "verifyKeyId", 0, 0);

  /* member "encipherKeyId" */
  p_struct->encipherKeyId=GWEN_DB_GetIntValue(p_db, "encipherKeyId", 0, 0);

  /* member "decipherKeyId" */
  p_struct->decipherKeyId=GWEN_DB_GetIntValue(p_db, "decipherKeyId", 0, 0);

  /* member "authSignKeyId" */
  p_struct->authSignKeyId=GWEN_DB_GetIntValue(p_db, "authSignKeyId", 0, 0);

  /* member "authVerifyKeyId" */
  p_struct->authVerifyKeyId=GWEN_DB_GetIntValue(p_db, "authVerifyKeyId", 0, 0);

  /* member "tempSignKeyId" */
  p_struct->tempSignKeyId=GWEN_DB_GetIntValue(p_db, "tempSignKeyId", 0, 0);

  /* member "serviceId" */
  if (p_struct->serviceId) {
    free(p_struct->serviceId);
  }
  { const char *s; s=GWEN_DB_GetCharValue(p_db, "serviceId", 0, NULL); if (s) p_struct->serviceId=strdup(s); }
  if (p_struct->serviceId==NULL) {
    p_struct->serviceId=NULL;
  }

  /* member "userId" */
  if (p_struct->userId) {
    free(p_struct->userId);
  }
  { const char *s; s=GWEN_DB_GetCharValue(p_db, "userId", 0, NULL); if (s) p_struct->userId=strdup(s); }
  if (p_struct->userId==NULL) {
    p_struct->userId=NULL;
  }

  /* member "customerId" */
  if (p_struct->customerId) {
    free(p_struct->customerId);
  }
  { const char *s; s=GWEN_DB_GetCharValue(p_db, "customerId", 0, NULL); if (s) p_struct->customerId=strdup(s); }
  if (p_struct->customerId==NULL) {
    p_struct->customerId=NULL;
  }

  /* member "userName" */
  if (p_struct->userName) {
    free(p_struct->userName);
  }
  { const char *s; s=GWEN_DB_GetCharValue(p_db, "userName", 0, NULL); if (s) p_struct->userName=strdup(s); }
  if (p_struct->userName==NULL) {
    p_struct->userName=NULL;
  }

  /* member "peerId" */
  if (p_struct->peerId) {
    free(p_struct->peerId);
  }
  { const char *s; s=GWEN_DB_GetCharValue(p_db, "peerId", 0, NULL); if (s) p_struct->peerId=strdup(s); }
  if (p_struct->peerId==NULL) {
    p_struct->peerId=NULL;
  }

  /* member "peerName" */
  if (p_struct->peerName) {
    free(p_struct->peerName);
  }
  { const char *s; s=GWEN_DB_GetCharValue(p_db, "peerName", 0, NULL); if (s) p_struct->peerName=strdup(s); }
  if (p_struct->peerName==NULL) {
    p_struct->peerName=NULL;
  }

  /* member "address" */
  if (p_struct->address) {
    free(p_struct->address);
  }
  { const char *s; s=GWEN_DB_GetCharValue(p_db, "address", 0, NULL); if (s) p_struct->address=strdup(s); }
  if (p_struct->address==NULL) {
    p_struct->address=NULL;
  }

  /* member "port" */
  p_struct->port=GWEN_DB_GetIntValue(p_db, "port", 0, 0);

  /* member "systemId" */
  if (p_struct->systemId) {
    free(p_struct->systemId);
  }
  { const char *s; s=GWEN_DB_GetCharValue(p_db, "systemId", 0, NULL); if (s) p_struct->systemId=strdup(s); }
  if (p_struct->systemId==NULL) {
    p_struct->systemId=NULL;
  }

}

int GWEN_Crypt_Token_Context_WriteDb(const GWEN_CRYPT_TOKEN_CONTEXT *p_struct, GWEN_DB_NODE *p_db) {
  int p_rv;

  assert(p_struct);
  /* member "id" */
  p_rv=GWEN_DB_SetIntValue(p_db, GWEN_DB_FLAGS_OVERWRITE_VARS, "id", p_struct->id);
  if (p_rv<0) {
    DBG_INFO(GWEN_LOGDOMAIN, "here (%d)\n", p_rv);
    return p_rv;
  }

  /* member "signKeyId" */
  p_rv=GWEN_DB_SetIntValue(p_db, GWEN_DB_FLAGS_OVERWRITE_VARS, "signKeyId", p_struct->signKeyId);
  if (p_rv<0) {
    DBG_INFO(GWEN_LOGDOMAIN, "here (%d)\n", p_rv);
    return p_rv;
  }

  /* member "verifyKeyId" */
  p_rv=GWEN_DB_SetIntValue(p_db, GWEN_DB_FLAGS_OVERWRITE_VARS, "verifyKeyId", p_struct->verifyKeyId);
  if (p_rv<0) {
    DBG_INFO(GWEN_LOGDOMAIN, "here (%d)\n", p_rv);
    return p_rv;
  }

  /* member "encipherKeyId" */
  p_rv=GWEN_DB_SetIntValue(p_db, GWEN_DB_FLAGS_OVERWRITE_VARS, "encipherKeyId", p_struct->encipherKeyId);
  if (p_rv<0) {
    DBG_INFO(GWEN_LOGDOMAIN, "here (%d)\n", p_rv);
    return p_rv;
  }

  /* member "decipherKeyId" */
  p_rv=GWEN_DB_SetIntValue(p_db, GWEN_DB_FLAGS_OVERWRITE_VARS, "decipherKeyId", p_struct->decipherKeyId);
  if (p_rv<0) {
    DBG_INFO(GWEN_LOGDOMAIN, "here (%d)\n", p_rv);
    return p_rv;
  }

  /* member "authSignKeyId" */
  p_rv=GWEN_DB_SetIntValue(p_db, GWEN_DB_FLAGS_OVERWRITE_VARS, "authSignKeyId", p_struct->authSignKeyId);
  if (p_rv<0) {
    DBG_INFO(GWEN_LOGDOMAIN, "here (%d)\n", p_rv);
    return p_rv;
  }

  /* member "authVerifyKeyId" */
  p_rv=GWEN_DB_SetIntValue(p_db, GWEN_DB_FLAGS_OVERWRITE_VARS, "authVerifyKeyId", p_struct->authVerifyKeyId);
  if (p_rv<0) {
    DBG_INFO(GWEN_LOGDOMAIN, "here (%d)\n", p_rv);
    return p_rv;
  }

  /* member "tempSignKeyId" */
  p_rv=GWEN_DB_SetIntValue(p_db, GWEN_DB_FLAGS_OVERWRITE_VARS, "tempSignKeyId", p_struct->tempSignKeyId);
  if (p_rv<0) {
    DBG_INFO(GWEN_LOGDOMAIN, "here (%d)\n", p_rv);
    return p_rv;
  }

  /* member "serviceId" */
  if (p_struct->serviceId) p_rv=GWEN_DB_SetCharValue(p_db, GWEN_DB_FLAGS_OVERWRITE_VARS, "serviceId", p_struct->serviceId);
  else { GWEN_DB_DeleteVar(p_db, "serviceId"); p_rv=0; }
  if (p_rv<0) {
    DBG_INFO(GWEN_LOGDOMAIN, "here (%d)\n", p_rv);
    return p_rv;
  }

  /* member "userId" */
  if (p_struct->userId) p_rv=GWEN_DB_SetCharValue(p_db, GWEN_DB_FLAGS_OVERWRITE_VARS, "userId", p_struct->userId);
  else { GWEN_DB_DeleteVar(p_db, "userId"); p_rv=0; }
  if (p_rv<0) {
    DBG_INFO(GWEN_LOGDOMAIN, "here (%d)\n", p_rv);
    return p_rv;
  }

  /* member "customerId" */
  if (p_struct->customerId) p_rv=GWEN_DB_SetCharValue(p_db, GWEN_DB_FLAGS_OVERWRITE_VARS, "customerId", p_struct->customerId);
  else { GWEN_DB_DeleteVar(p_db, "customerId"); p_rv=0; }
  if (p_rv<0) {
    DBG_INFO(GWEN_LOGDOMAIN, "here (%d)\n", p_rv);
    return p_rv;
  }

  /* member "userName" */
  if (p_struct->userName) p_rv=GWEN_DB_SetCharValue(p_db, GWEN_DB_FLAGS_OVERWRITE_VARS, "userName", p_struct->userName);
  else { GWEN_DB_DeleteVar(p_db, "userName"); p_rv=0; }
  if (p_rv<0) {
    DBG_INFO(GWEN_LOGDOMAIN, "here (%d)\n", p_rv);
    return p_rv;
  }

  /* member "peerId" */
  if (p_struct->peerId) p_rv=GWEN_DB_SetCharValue(p_db, GWEN_DB_FLAGS_OVERWRITE_VARS, "peerId", p_struct->peerId);
  else { GWEN_DB_DeleteVar(p_db, "peerId"); p_rv=0; }
  if (p_rv<0) {
    DBG_INFO(GWEN_LOGDOMAIN, "here (%d)\n", p_rv);
    return p_rv;
  }

  /* member "peerName" */
  if (p_struct->peerName) p_rv=GWEN_DB_SetCharValue(p_db, GWEN_DB_FLAGS_OVERWRITE_VARS, "peerName", p_struct->peerName);
  else { GWEN_DB_DeleteVar(p_db, "peerName"); p_rv=0; }
  if (p_rv<0) {
    DBG_INFO(GWEN_LOGDOMAIN, "here (%d)\n", p_rv);
    return p_rv;
  }

  /* member "address" */
  if (p_struct->address) p_rv=GWEN_DB_SetCharValue(p_db, GWEN_DB_FLAGS_OVERWRITE_VARS, "address", p_struct->address);
  else { GWEN_DB_DeleteVar(p_db, "address"); p_rv=0; }
  if (p_rv<0) {
    DBG_INFO(GWEN_LOGDOMAIN, "here (%d)\n", p_rv);
    return p_rv;
  }

  /* member "port" */
  p_rv=GWEN_DB_SetIntValue(p_db, GWEN_DB_FLAGS_OVERWRITE_VARS, "port", p_struct->port);
  if (p_rv<0) {
    DBG_INFO(GWEN_LOGDOMAIN, "here (%d)\n", p_rv);
    return p_rv;
  }

  /* member "systemId" */
  if (p_struct->systemId) p_rv=GWEN_DB_SetCharValue(p_db, GWEN_DB_FLAGS_OVERWRITE_VARS, "systemId", p_struct->systemId);
  else { GWEN_DB_DeleteVar(p_db, "systemId"); p_rv=0; }
  if (p_rv<0) {
    DBG_INFO(GWEN_LOGDOMAIN, "here (%d)\n", p_rv);
    return p_rv;
  }

  return 0;
}

GWEN_CRYPT_TOKEN_CONTEXT *GWEN_Crypt_Token_Context_fromDb(GWEN_DB_NODE *p_db) {
  GWEN_CRYPT_TOKEN_CONTEXT *p_struct;
  p_struct=GWEN_Crypt_Token_Context_new();
  GWEN_Crypt_Token_Context_ReadDb(p_struct, p_db);
  return p_struct;
}

int GWEN_Crypt_Token_Context_toDb(const GWEN_CRYPT_TOKEN_CONTEXT *p_struct, GWEN_DB_NODE *p_db) {
  return GWEN_Crypt_Token_Context_WriteDb(p_struct, p_db);
}

void GWEN_Crypt_Token_Context_ReadXml(GWEN_CRYPT_TOKEN_CONTEXT *p_struct, GWEN_XMLNODE *p_db) {
  assert(p_struct);
  /* member "id" */
  p_struct->id=GWEN_XMLNode_GetIntValue(p_db, "id", 0);

  /* member "signKeyId" */
  p_struct->signKeyId=GWEN_XMLNode_GetIntValue(p_db, "signKeyId", 0);

  /* member "verifyKeyId" */
  p_struct->verifyKeyId=GWEN_XMLNode_GetIntValue(p_db, "verifyKeyId", 0);

  /* member "encipherKeyId" */
  p_struct->encipherKeyId=GWEN_XMLNode_GetIntValue(p_db, "encipherKeyId", 0);

  /* member "decipherKeyId" */
  p_struct->decipherKeyId=GWEN_XMLNode_GetIntValue(p_db, "decipherKeyId", 0);

  /* member "authSignKeyId" */
  p_struct->authSignKeyId=GWEN_XMLNode_GetIntValue(p_db, "authSignKeyId", 0);

  /* member "authVerifyKeyId" */
  p_struct->authVerifyKeyId=GWEN_XMLNode_GetIntValue(p_db, "authVerifyKeyId", 0);

  /* member "tempSignKeyId" */
  p_struct->tempSignKeyId=GWEN_XMLNode_GetIntValue(p_db, "tempSignKeyId", 0);

  /* member "serviceId" */
  if (p_struct->serviceId) {
    free(p_struct->serviceId);
  }
  { const char *s; s=GWEN_XMLNode_GetCharValue(p_db, "serviceId", NULL); if (s) p_struct->serviceId=strdup(s); }
  if (p_struct->serviceId==NULL) {  /* member "serviceId" is volatile, just presetting */
    p_struct->serviceId=NULL;
  }

  /* member "userId" */
  if (p_struct->userId) {
    free(p_struct->userId);
  }
  { const char *s; s=GWEN_XMLNode_GetCharValue(p_db, "userId", NULL); if (s) p_struct->userId=strdup(s); }
  if (p_struct->userId==NULL) {  /* member "userId" is volatile, just presetting */
    p_struct->userId=NULL;
  }

  /* member "customerId" */
  if (p_struct->customerId) {
    free(p_struct->customerId);
  }
  { const char *s; s=GWEN_XMLNode_GetCharValue(p_db, "customerId", NULL); if (s) p_struct->customerId=strdup(s); }
  if (p_struct->customerId==NULL) {  /* member "customerId" is volatile, just presetting */
    p_struct->customerId=NULL;
  }

  /* member "userName" */
  if (p_struct->userName) {
    free(p_struct->userName);
  }
  { const char *s; s=GWEN_XMLNode_GetCharValue(p_db, "userName", NULL); if (s) p_struct->userName=strdup(s); }
  if (p_struct->userName==NULL) {  /* member "userName" is volatile, just presetting */
    p_struct->userName=NULL;
  }

  /* member "peerId" */
  if (p_struct->peerId) {
    free(p_struct->peerId);
  }
  { const char *s; s=GWEN_XMLNode_GetCharValue(p_db, "peerId", NULL); if (s) p_struct->peerId=strdup(s); }
  if (p_struct->peerId==NULL) {  /* member "peerId" is volatile, just presetting */
    p_struct->peerId=NULL;
  }

  /* member "peerName" */
  if (p_struct->peerName) {
    free(p_struct->peerName);
  }
  { const char *s; s=GWEN_XMLNode_GetCharValue(p_db, "peerName", NULL); if (s) p_struct->peerName=strdup(s); }
  if (p_struct->peerName==NULL) {  /* member "peerName" is volatile, just presetting */
    p_struct->peerName=NULL;
  }

  /* member "address" */
  if (p_struct->address) {
    free(p_struct->address);
  }
  { const char *s; s=GWEN_XMLNode_GetCharValue(p_db, "address", NULL); if (s) p_struct->address=strdup(s); }
  if (p_struct->address==NULL) {  /* member "address" is volatile, just presetting */
    p_struct->address=NULL;
  }

  /* member "port" */
  p_struct->port=GWEN_XMLNode_GetIntValue(p_db, "port", 0);

  /* member "systemId" */
  if (p_struct->systemId) {
    free(p_struct->systemId);
  }
  { const char *s; s=GWEN_XMLNode_GetCharValue(p_db, "systemId", NULL); if (s) p_struct->systemId=strdup(s); }
  if (p_struct->systemId==NULL) {  /* member "systemId" is volatile, just presetting */
    p_struct->systemId=NULL;
  }

}

void GWEN_Crypt_Token_Context_WriteXml(const GWEN_CRYPT_TOKEN_CONTEXT *p_struct, GWEN_XMLNODE *p_db) {
  assert(p_struct);
  /* member "id" */
  GWEN_XMLNode_SetIntValue(p_db, "id", p_struct->id);

  /* member "signKeyId" */
  GWEN_XMLNode_SetIntValue(p_db, "signKeyId", p_struct->signKeyId);

  /* member "verifyKeyId" */
  GWEN_XMLNode_SetIntValue(p_db, "verifyKeyId", p_struct->verifyKeyId);

  /* member "encipherKeyId" */
  GWEN_XMLNode_SetIntValue(p_db, "encipherKeyId", p_struct->encipherKeyId);

  /* member "decipherKeyId" */
  GWEN_XMLNode_SetIntValue(p_db, "decipherKeyId", p_struct->decipherKeyId);

  /* member "authSignKeyId" */
  GWEN_XMLNode_SetIntValue(p_db, "authSignKeyId", p_struct->authSignKeyId);

  /* member "authVerifyKeyId" */
  GWEN_XMLNode_SetIntValue(p_db, "authVerifyKeyId", p_struct->authVerifyKeyId);

  /* member "tempSignKeyId" */
  GWEN_XMLNode_SetIntValue(p_db, "tempSignKeyId", p_struct->tempSignKeyId);

  /* member "serviceId" */
  GWEN_XMLNode_SetCharValue(p_db, "serviceId", p_struct->serviceId);

  /* member "userId" */
  GWEN_XMLNode_SetCharValue(p_db, "userId", p_struct->userId);

  /* member "customerId" */
  GWEN_XMLNode_SetCharValue(p_db, "customerId", p_struct->customerId);

  /* member "userName" */
  GWEN_XMLNode_SetCharValue(p_db, "userName", p_struct->userName);

  /* member "peerId" */
  GWEN_XMLNode_SetCharValue(p_db, "peerId", p_struct->peerId);

  /* member "peerName" */
  GWEN_XMLNode_SetCharValue(p_db, "peerName", p_struct->peerName);

  /* member "address" */
  GWEN_XMLNode_SetCharValue(p_db, "address", p_struct->address);

  /* member "port" */
  GWEN_XMLNode_SetIntValue(p_db, "port", p_struct->port);

  /* member "systemId" */
  GWEN_XMLNode_SetCharValue(p_db, "systemId", p_struct->systemId);

}

void GWEN_Crypt_Token_Context_toXml(const GWEN_CRYPT_TOKEN_CONTEXT *p_struct, GWEN_XMLNODE *p_db) {
  GWEN_Crypt_Token_Context_WriteXml(p_struct, p_db);
}

GWEN_CRYPT_TOKEN_CONTEXT *GWEN_Crypt_Token_Context_fromXml(GWEN_XMLNODE *p_db) {
  GWEN_CRYPT_TOKEN_CONTEXT *p_struct;
  p_struct=GWEN_Crypt_Token_Context_new();
  GWEN_Crypt_Token_Context_ReadXml(p_struct, p_db);
  return p_struct;
}

GWEN_CRYPT_TOKEN_CONTEXT *GWEN_Crypt_Token_Context_List_GetById(const GWEN_CRYPT_TOKEN_CONTEXT_LIST *p_list, uint32_t p_cmp) {
  GWEN_CRYPT_TOKEN_CONTEXT *p_struct;

  assert(p_list);
  p_struct = GWEN_Crypt_Token_Context_List_First(p_list);
  while(p_struct) {
    int p_rv;

    if (p_struct->id==p_cmp) p_rv=0;
    else if (p_cmp<p_struct->id) p_rv=-1;
    else p_rv=1;
    if (p_rv == 0)
      return p_struct;
    p_struct = GWEN_Crypt_Token_Context_List_Next(p_struct);
  }
  return NULL;
}


/* code headers */

