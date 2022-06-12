# Install script for directory: /home/user/catkin_ws/src/nmea_navsat_driver-2ac72c41be3a18999770d609c17e1ac97225d9b6

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/user/catkin_ws/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/home/user/catkin_ws/build/nmea_navsat_driver-2ac72c41be3a18999770d609c17e1ac97225d9b6/catkin_generated/safe_execute_install.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/user/catkin_ws/build/nmea_navsat_driver-2ac72c41be3a18999770d609c17e1ac97225d9b6/catkin_generated/installspace/nmea_navsat_driver.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/nmea_navsat_driver/cmake" TYPE FILE FILES
    "/home/user/catkin_ws/build/nmea_navsat_driver-2ac72c41be3a18999770d609c17e1ac97225d9b6/catkin_generated/installspace/nmea_navsat_driverConfig.cmake"
    "/home/user/catkin_ws/build/nmea_navsat_driver-2ac72c41be3a18999770d609c17e1ac97225d9b6/catkin_generated/installspace/nmea_navsat_driverConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/nmea_navsat_driver" TYPE FILE FILES "/home/user/catkin_ws/src/nmea_navsat_driver-2ac72c41be3a18999770d609c17e1ac97225d9b6/package.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/nmea_navsat_driver" TYPE PROGRAM FILES
    "/home/user/catkin_ws/src/nmea_navsat_driver-2ac72c41be3a18999770d609c17e1ac97225d9b6/scripts/nmea_serial_driver"
    "/home/user/catkin_ws/src/nmea_navsat_driver-2ac72c41be3a18999770d609c17e1ac97225d9b6/scripts/nmea_socket_driver"
    "/home/user/catkin_ws/src/nmea_navsat_driver-2ac72c41be3a18999770d609c17e1ac97225d9b6/scripts/nmea_topic_driver"
    "/home/user/catkin_ws/src/nmea_navsat_driver-2ac72c41be3a18999770d609c17e1ac97225d9b6/scripts/nmea_topic_serial_reader"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/nmea_navsat_driver/launch" TYPE DIRECTORY FILES "/home/user/catkin_ws/src/nmea_navsat_driver-2ac72c41be3a18999770d609c17e1ac97225d9b6/launch/" FILES_MATCHING REGEX "/[^/]*\\.launch$")
endif()

