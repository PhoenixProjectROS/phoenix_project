execute_process(COMMAND "/home/user/catkin_ws/build/nmea_navsat_driver-2ac72c41be3a18999770d609c17e1ac97225d9b6/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/user/catkin_ws/build/nmea_navsat_driver-2ac72c41be3a18999770d609c17e1ac97225d9b6/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
