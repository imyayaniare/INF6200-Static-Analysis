```bash
Capturing in make/cc mode...
../Documents/COURS_UQAM/INF6200/inf6200/busybox/coreutils/cat.c:72:10: fatal error: 'libbb.h' file not found
   72 | #include "libbb.h"
      |          ^~~~~~~~~
1 error generated.
Error: the following clang command did not run successfully:
    /opt/infer/lib/infer/facebook-clang-plugins/clang/install/bin/clang-18
    @/home/yaya/Téléchargements/infer-out/tmp/clang_command_.tmp.8cb5a8.txt
  ++Contents of '/home/yaya/Téléchargements/infer-out/tmp/clang_command_.tmp.8cb5a8.txt':
    "-cc1" "-load"
    "/opt/infer/lib/infer/infer/bin/../../facebook-clang-plugins/libtooling/build/FacebookClangPlugin.dylib"
    "-add-plugin" "BiniouASTExporter" "-plugin-arg-BiniouASTExporter" "-"
    "-plugin-arg-BiniouASTExporter" "PREPEND_CURRENT_DIR=1"
    "-plugin-arg-BiniouASTExporter" "MAX_STRING_SIZE=65535" "-cc1" "-triple"
    "x86_64-unknown-linux-gnu" "-emit-obj" "-mrelax-all" "-disable-free"
    "-clear-ast-before-backend" "-disable-llvm-verifier"
    "-discard-value-names" "-main-file-name" "cat.c" "-mrelocation-model"
    "pic" "-pic-level" "2" "-pic-is-pie" "-mframe-pointer=all" "-fmath-errno"
    "-ffp-contract=on" "-fno-rounding-math" "-mconstructor-aliases"
    "-funwind-tables=2" "-target-cpu" "x86-64" "-tune-cpu" "generic"
    "-debugger-tuning=gdb"
    "-fdebug-compilation-dir=/home/yaya/Téléchargements"
    "-fcoverage-compilation-dir=/home/yaya/Téléchargements" "-resource-dir"
    "/opt/infer/lib/infer/facebook-clang-plugins/clang/install/lib/clang/18"
    "-include"
    "/opt/infer/lib/infer/infer/bin/../lib/clang_wrappers/global_defines.h"
    "-internal-isystem"
    "/opt/infer/lib/infer/facebook-clang-plugins/clang/install/lib/clang/18/include"
    "-internal-isystem" "/usr/local/include" "-internal-isystem"
    "/usr/lib/gcc/x86_64-linux-gnu/14/../../../../x86_64-linux-gnu/include"
    "-internal-externc-isystem" "/usr/include/x86_64-linux-gnu"
    "-internal-externc-isystem" "/include" "-internal-externc-isystem"
    "/usr/include" "-Wno-ignored-optimization-argument" "-Wno-everything"
    "-ferror-limit" "19" "-fgnuc-version=4.2.1" "-fskip-odr-check-in-gmf"
    "-D__GCC_HAVE_DWARF2_CFI_ASM=1" "-o" "cat.o" "-x" "c"
    "../Documents/COURS_UQAM/INF6200/inf6200/busybox/coreutils/cat.c" "-O0"
    "-fno-builtin" "-include"
    "/opt/infer/lib/infer/infer/bin/../lib/clang_wrappers/global_defines.h"
    "-Wno-everything"
  


```
