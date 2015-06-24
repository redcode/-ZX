/*	_________  ___
  _____ \_   /\  \/  /	μZX - common/MainController.h
 |  |  |_/  /__>    <	Copyright © 2014-2015 Manuel Sainz de Baranda y Goñi.
 |   ____________/\__\	Released under the terms of the GNU General Public License v3.
 |_*/

#include "Machine.h"
#include <Q/functions/buffering/QTripleBuffer.h>
#include <Q/functions/buffering/QRingBuffer.h>
#include "system.h"


/*
static void emulate(Machine *object)
	{
	quint64 frames_per_second = 50;
	quint64 frame_ticks	  = 1000000000 / frames_per_second;
	quint64 next_frame_tick   = q_ticks();
	quint64 delta;
	quint	maximum_frameskip = 5;
	quint	loops;
	void*	audio_output_buffer;
	quint64* keyboard;

	while (!object->must_stop)
		{
		loops = 0;

		do object->abi->run_one_frame(object->_machine);
		while ((next_frame_tick += frame_ticks) < q_ticks() && ++loops < maximum_frameskip);

		if ((audio_output_buffer = q_ring_buffer_try_produce(controller->_audioOutputBuffer)) != NULL)
			controller->_machine->audio_output_buffer = audio_output_buffer;

		controller->_machine->video_output_buffer = q_triple_buffer_produce(controller->_videoOutputBuffer);

		//----------------.
		// Consume input. |
		//----------------'
		if ((keyboard = q_triple_buffer_consume(controller->_keyboardBuffer)) != NULL)
			{controller->_machine->state.keyboard.value_uint64 = *keyboard;}

		if (controller->_audioInputBuffer != NULL)
			{
			controller->_machine->audio_input_buffer = ring_buffer_try_read(controller->_audioInputRing, controller->_audioInputBuffer)
				? controller->_audioInputBuffer : NULL;
			}

		//----------------------------------------.
		// Schedule next iteration time and wait. |
		//----------------------------------------'
		if ((delta = next_frame_tick - q_ticks()) <= frame_ticks)
			q_wait(delta);

		//else printf("delta => %lu, next => %lu\n", delta, next_frame_tick);
		}

	return NULL;
	}
*/

void machine_initialize(Machine *object)
	{
	}


void machine_finalize(Machine *object)
	{
	}


void machine_run(Machine *object)
	{
	}


void machine_run_one_frame(Machine *object)
	{
	}


void machine_power(Machine *object, qboolean state)
	{
	}


void machine_start(Machine *object)
	{
	}


void machine_stop(Machine *object)
	{
	}


void machine_reset(Machine *object)
	{
	}


void machine_keyboard_input(Machine *object, quint16  key_code, qboolean key_state)
	{
	}


/* Machine.c EOF */
