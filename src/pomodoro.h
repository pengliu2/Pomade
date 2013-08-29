// ----------------------------------------------------------------------------
// pomodoro - Defines a model to track progress through the Pomodoro Technique
// Copyright (c) 2013 Jonathan Speicher (jon.speicher@gmail.com)
// Licensed under the MIT license: http://opensource.org/licenses/MIT
// ----------------------------------------------------------------------------

#pragma once

#include <stdbool.h>

// Defines a structure type to hold a pomodoro technique segment.

typedef struct {
  Interval interval;
  bool restart_on_abort;
} Segment;

// Defines a structure type to hold the pomodoro technique segment sequence.

typedef struct {
  Segment* this_segment;
  Segment pomodoro;
  Segment rest;
} Pomodoro;

// Initializes the pomodoro technique structure.

void pomodoro_init(Pomodoro* pomodoro);

// Completes the current pomodoro technique segment and causes an advance to
// the next appropriate segment in the pomodoro technique sequence.

void pomodoro_complete_segment(Pomodoro* pomodoro);

// Aborts the current pomodoro tecnique segment and causes an advance to the
// next appropriate segment in the pomodoro technique sequence.

void pomodoro_abort_segment(Pomodoro* pomodoro);
