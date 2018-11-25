/*
 * PE6.cpp
 * 
 * Copyright 2018 Mason Fisher <mason@extDrive>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <iostream>
#include <ctime>
#include "./Classes/arrayListType.h"
int main(int argc, char **argv)
{
	srand(time(NULL));
	int size = 1000;
	arrayListType<int> list(size);
	for(int i = 0; i < size; i ++){
		list.insert(rand()%10);
	}
	cout<< "List before sort:\n";
	list.print();
	list.quickSort();
	cout<<"\nList after sort:\n";
	list.print();
	
	return 0;
}

