#ifndef WSMG_OBJECT_H
#define WSMG_OBJECT_H

#ifdef __cplusplus
extern "C" {
#endif

typedef struct WSMG_STATE_BOOL WSMG_STATE_BOOL;

enum WSMG_STATE_BOOL_VALUE {
  WSMG_FALSE = 0,
  WSMG_TRUE = 1,
  WSMG_NONE = 2
};

WSMG_STATE_BOOL *create_bool(enum WSMG_STATE_BOOL_VALUE);
void reassign_bool(WSMG_STATE_BOOL *, enum WSMG_STATE_BOOL_VALUE);
enum WSMG_STATE_BOOL_VALUE read_bool(WSMG_STATE_BOOL *);
void destroy_bool(WSMG_STATE_BOOL *);

#ifdef __cplusplus
}
#endif

#endif