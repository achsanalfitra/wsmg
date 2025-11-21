#ifndef WSMGUI_IMGUI_H
#define WSMGUI_IMGUI_H

#include "wsmg_object.h"
#ifdef __cplusplus
extern "C" {
#endif

// Clear separation of the API
// Backend: platform/hardware
// Canvas: window to draw elements
// Component: 1-1 implementation for the UI

// Object contracts
typedef struct WSMG_IMGUI_BACKEND_OBJECT WSMG_IMGUI_BACKEND_OBJECT;
typedef struct WSMG_IMGUI_CONFIG_OBJECT WSMG_IMGUI_CONFIG_OBJECT;

// backend-type and backend setups
// enum BACKEND_TYPE { VULKAN_SDL3 = 0, WEBGPU_SDL3 = 1 };

enum BACKEND_STATUS_REPORT {
  BACKEND_STATUS_REPORT_SUCCESS = 0,
  BACKEND_STATUS_REPORT_FAILED = 1,
  BACKEND_STATUS_REPORT_CONTINUE_MAIN_LOOP = 2,
  BACKEND_STATUS_REPORT_BREAK_MAIN_LOOP = 3,
};

WSMG_IMGUI_BACKEND_OBJECT *backend_construct_object();
enum BACKEND_STATUS_REPORT backend_render_routine(WSMG_IMGUI_BACKEND_OBJECT *);
void backend_teardown(WSMG_IMGUI_BACKEND_OBJECT *);

WSMG_IMGUI_CONFIG_OBJECT *config_construct_object(WSMG_IMGUI_BACKEND_OBJECT *);
void config_teardown(WSMG_IMGUI_CONFIG_OBJECT *);

// placeholder for creating imgui demo
void imgui_draw_component(WSMG_STATE_BOOL *, WSMG_STATE_BOOL *,
                          WSMG_IMGUI_CONFIG_OBJECT *);

// draw phase
void draw_frame(WSMG_IMGUI_BACKEND_OBJECT *, WSMG_IMGUI_CONFIG_OBJECT *);

#ifdef __cplusplus
}
#endif

#endif