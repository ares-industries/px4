px4_add_module(
	MODULE modules__ares
	MAIN ares
	SRCS
		AresControl.cpp
		AresControl.hpp
	DEPENDS
		px4_work_queue
)
