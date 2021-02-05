# CMake generated Testfile for 
# Source directory: /home/ttrocha/_dev/extprojects/incubation/zmq/globdom
# Build directory: /home/ttrocha/_dev/extprojects/incubation/zmq/globdom/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(gdom_server "/home/ttrocha/_dev/extprojects/incubation/zmq/globdom/build/gdom_selftest" "--continue" "--verbose" "--test" "gdom_server")
set_tests_properties(gdom_server PROPERTIES  DEPENDS "copy-selftest-ro;make-selftest-rw" TIMEOUT "60" _BACKTRACE_TRIPLES "/home/ttrocha/_dev/extprojects/incubation/zmq/globdom/CMakeLists.txt;405;add_test;/home/ttrocha/_dev/extprojects/incubation/zmq/globdom/CMakeLists.txt;0;")
