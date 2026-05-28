project(emulationstation-tests)

set(TEST_SOURCES
    test_util.cpp
    ${CMAKE_SOURCE_DIR}/es-core/src/Util.cpp
    ${CMAKE_SOURCE_DIR}/es-core/src/platform.cpp
)

include_directories(
    ${CMAKE_SOURCE_DIR}/es-core/src
    ${CMAKE_SOURCE_DIR}/external
    ${EIGEN3_INCLUDE_DIR}
)

add_executable(run_tests ${TEST_SOURCES})

target_link_libraries(run_tests
    ${Boost_LIBRARIES}
)

# Optional: integrate with CTest
enable_testing()
add_test(NAME unit_tests COMMAND run_tests)
