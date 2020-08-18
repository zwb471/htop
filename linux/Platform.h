/* Do not edit this file. It was automatically generated. */

#ifndef HEADER_Platform
#define HEADER_Platform
/*
htop - linux/Platform.h
(C) 2014 Hisham H. Muhammad
Released under the GNU GPL, see the COPYING file
in the source distribution for its full text.
*/

#include "Action.h"
#include "MainPanel.h"
#include "BatteryMeter.h"
#include "LinuxProcess.h"
#include "SignalsPanel.h"

#ifndef CLAMP
#define CLAMP(x,low,high) (((x)>(high))?(high):(((x)<(low))?(low):(x)))
#endif

extern ProcessField Platform_defaultFields[];

extern int Platform_numberOfFields;

extern const SignalItem Platform_signals[];

extern const unsigned int Platform_numberOfSignals;

extern void Platform_setBindings(Htop_Action* keys);

extern MeterClass* Platform_meterTypes[];

extern int Platform_getUptime();

extern void Platform_getLoadAverage(double* one, double* five, double* fifteen);

extern int Platform_getMaxPid();

extern double Platform_setCPUValues(Meter* this, int cpu);

extern void Platform_setMemoryValues(Meter* this);

extern void Platform_setSwapValues(Meter* this);

extern char* Platform_getProcessEnv(pid_t pid);

#endif
