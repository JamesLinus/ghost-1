/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                                                                           *
 *  Ghost, a micro-kernel based operating system for the x86 architecture    *
 *  Copyright (C) 2015, Max Schlüssel <lokoxe@gmail.com>                     *
 *                                                                           *
 *  This program is free software: you can redistribute it and/or modify     *
 *  it under the terms of the GNU General Public License as published by     *
 *  the Free Software Foundation, either version 3 of the License, or        *
 *  (at your option) any later version.                                      *
 *                                                                           *
 *  This program is distributed in the hope that it will be useful,          *
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of           *
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the            *
 *  GNU General Public License for more details.                             *
 *                                                                           *
 *  You should have received a copy of the GNU General Public License        *
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.    *
 *                                                                           *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef __PLAIN_CONSOLE_PANEL__
#define __PLAIN_CONSOLE_PANEL__

#include <components/component.hpp>
#include <ghostuser/graphics/text/text_alignment.hpp>
#include <ghostuser/graphics/text/font.hpp>
#include <string>

/**
 *
 */
class plain_console_panel_t: public component_t {
private:
	g_font* font;
	std::string content;
	bool focused;

public:
	plain_console_panel_t();

	virtual void update();
	virtual void paint();
	virtual bool handle(event_t& e);

	void append(char c);
};

#endif
