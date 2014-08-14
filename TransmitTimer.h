#ifndef TRANSMIT_TIMER_H
#define TRANSMIT_TIMER_H

enum
{
	AM_TRANSMITTIMER = 6,
	TIMER_PERIODIC_MILLI_0 = 2048,
	TIMER_PERIODIC_MILLI_1 = 5240	
};

typedef nx_struct TransmitTimerMsg
{
	nx_uint16_t nodeid;
	nx_uint16_t counter;
	nx_uint16_t lostpackets;
	nx_uint16_t retransmission;
	nx_uint16_t acknowledged;
	nx_uint16_t movingaverage;	
	nx_uint16_t battery;
	nx_uint32_t txtime;
	nx_uint32_t rxtime;
	nx_uint32_t processortime;
	nx_uint32_t energy;
}TransmitTimerMsg;

#endif /* TRANSMIT_TIMER_H */
