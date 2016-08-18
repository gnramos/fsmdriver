/**  @file: FSMDriverABS.h
 *
 * https://github.com/bruno147/fsmdriver
 * 
 * This program is free software; you can redistribute it and/or modify it under
 * the terms of the GNU General Public License as published by the Free Software
 * Foundation; either version 2 of the License, or (at your option) any later
 * version. 
 */

#ifndef UNB_FSMDRIVER_FSMDRIVERABS_H
#define UNB_FSMDRIVER_FSMDRIVERABS_H

#include "FSMDriver3.h"
#include "InsideTrackABS.h"
#include <fstream>


class FSMDriverABS : public FSMDriver3{
public:
    /**
    *   Constructor of FSMDriverABS. Changes FSMDriver3's Inside Track state with the Bernw ABS implemented.
    */
    FSMDriverABS();
};

#endif // FSMDriverABS_H