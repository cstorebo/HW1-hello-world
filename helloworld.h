/*
 *  Hello World header file
 *   Copyright 2018
 *
 *  Contributors:
 *   Aaron S. Crandall <acrandal@gonzaga.edu>
 */

#ifndef MAIN_H
#define MAIN_H

#include <iostream>

/** 
 * Prints the Hello World string to a provided stream
 *  Currently broken for potentially obvious reasons.
 */
void print_hello_world(std::ostream& out)
{
    out << "Goodbye World!" << std::endl;
}

#endif
