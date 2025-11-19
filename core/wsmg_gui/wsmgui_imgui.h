#ifndef WSMGUI_IMGUI_H
#define WSMGUI_IMGUI_H

#ifdef __cplusplus
extern "C" {
#endif

// setup backend
typedef struct WSMG_IMGUI_BACKEND_OBJECT WSMG_IMGUI_BACKEND_OBJECT;

// backend type
enum BACKEND_TYPE { VULKAN_SDL3 = 0 };

enum BACKEND_STATUS_REPORT {
  BACKEND_STATUS_REPORT_SUCCESS = 0,
  BACKEND_STATUS_REPORT_FAILED = 1,
  BACKEND_STATUS_REPORT_CONTINUE_MAIN_LOOP = 2,
  BACKEND_STATUS_REPORT_BREAK_MAIN_LOOP = 3,
};

WSMG_IMGUI_BACKEND_OBJECT *backend_construct_object(enum BACKEND_TYPE);
enum BACKEND_STATUS_REPORT backend_setup(WSMG_IMGUI_BACKEND_OBJECT *);
enum BACKEND_STATUS_REPORT backend_render_routine(WSMG_IMGUI_BACKEND_OBJECT *);
void backend_teardown(WSMG_IMGUI_BACKEND_OBJECT *);

// imgui routine
typedef struct WSMG_IMGUI_COMPONENT_OBJECT WSMG_IMGUI_COMPONENT_OBJECT;

WSMG_IMGUI_COMPONENT_OBJECT *imgui_construct_object();
void start_demo(
    WSMG_IMGUI_COMPONENT_OBJECT *); // placeholder function to run it all
void cleanup(WSMG_IMGUI_COMPONENT_OBJECT *);


// integrate both
void draw_frame(WSMG_IMGUI_BACKEND_OBJECT *, WSMG_IMGUI_COMPONENT_OBJECT *);

#ifdef __cplusplus
}
#endif

#endif