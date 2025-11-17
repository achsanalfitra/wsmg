# About WSMG

WSMG is the software focused iteration of smgen. While smgen is the ecosystem for the ontological programming paradigm, WSMG is the main C/C++ (potentially uses other high-level languages) apps.

## Flow

This repository will^(1) have visual based documentations. Those are the first entrypoint of the production code. The complete end-to-end flow of the program looks like this:

```
    begin:
        experiment:
            iterate
            code
            test
            document

        production:
            concept
            graph
            code
    end:
```

^(1): correct the tense when the graph files already exist

## Structure

``` 
    /wsmg <--- project root
        about_wsmg.md
        {packagemanager.config} !future to add
        {linker.config}         !idem 
        /packages
            index.md
            {package_name}.txt <--- path or environment variable
            {package_name}.{dll, h, etc}
            /{package_name} !for easier grouping when downloading big packages
        /core
            /wsmg_vm
                wsmg_vm.h
                wsmg_vm_net.h
                wsmg_vm_io.h
            /wsmg_gui
                wsmgui_imgui.h
                wsmgui_imgui.cpp
            /wsmg_compiler
                /src
                    main.rs
                ... !other rust build files
            /wsmg_acompiler
                !to add in the future, main.smgc
        /platform
            /we_build_web
                cmakelist.txt !each platform app is self contained
                /ui
                    we_build_web.cpp
                /runner
                    we_build_web.c

```