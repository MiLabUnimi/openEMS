/*
*	Copyright (C) 2010 Thorsten Liebig (Thorsten.Liebig@gmx.de)
*
*	This program is free software: you can redistribute it and/or modify
*	it under the terms of the GNU General Public License as published by
*	the Free Software Foundation, either version 3 of the License, or
*	(at your option) any later version.
*
*	This program is distributed in the hope that it will be useful,
*	but WITHOUT ANY WARRANTY; without even the implied warranty of
*	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*	GNU General Public License for more details.
*
*	You should have received a copy of the GNU General Public License
*	along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef ENGINE_CYLINDER_H
#define ENGINE_CYLINDER_H

#include "engine.h"
#include "operator_cylinder.h"

class Engine_Cylinder : public Engine
{
public:
	static Engine_Cylinder* New(const Operator_Cylinder* op);

	virtual void Init();
	virtual void Reset();

protected:
	Engine_Cylinder(const Operator_Cylinder* op);
	~Engine_Cylinder();
};

#endif // ENGINE_CYLINDER_H