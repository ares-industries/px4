#include "AresControl.hpp"

AresControl::AresControl() :
	ModuleParams(nullptr),
	ScheduledWorkItem(MODULE_NAME, px4::wq_configurations::nav_and_controllers)
{
}

AresControl::~AresControl() {
}

int AresControl::task_spawn(int argc, char *argv[]) {
	return PX4_ERROR;
}

int AresControl::custom_command(int argc, char* argv[]) {
	return print_usage("unknown command");
}

int AresControl::print_usage(const char *reason) {
	if (reason) {
		PX4_WARN("%s\n", reason);
	}

	return 0;
}

extern "C" __EXPORT int ares_main(int argc, char* argv[]) {
	return AresControl::main(argc, argv);
}
