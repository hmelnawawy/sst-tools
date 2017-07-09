// Copyright 2009-2015 Sandia Corporation. Under the terms
// of Contract DE-AC04-94AL85000 with Sandia Corporation, the U.S.
// Government retains certain rights in this software.
//
// Copyright (c) 2009-2015, Sandia Corporation
// All rights reserved.
//
// This file is part of the SST software package. For license
// information, see the LICENSE file in the top level directory of the
// distribution.


#include <ariel.h>
#include <stdio.h>

void ariel_enable() {
	printf("ARIEL-CLIENT: Library enabled.\n");
}

void ariel_disable() {
	printf("ARIEL-CLIENT: Library disabled.\n");
}

uint64_t ariel_cycles() {
	return 0;
}
