#define ON_BUTTON_DOWN(button, name, callback) \
void name()                                    \
{                                              \
	static int previous = 0;                     \
	int current = vexRT(chute_btn);              \
	if (current != previous && current == 1)     \
	{                                            \
		callback();                                \
	}                                            \
	previous = current;                          \
}

ON_BUTTON_DOWN(chute_btn, check_chute_btn_edge, toggle_chute)
ON_BUTTON_DOWN(belt_btn, check_belt_btn_edge, toggle_belt)
ON_BUTTON_DOWN(belt_sign_btn, check_belt_sign_btn_edge, toggle_belt_sign)
ON_BUTTON_DOWN(drive_style_btn, check_drive_style_btn_edge, change_drive_style)

void check_buttons()
{
	check_chute_btn_edge();
	//check_chute_sign_btn_edge();

	check_belt_btn_edge();
	check_belt_sign_btn_edge();

	//check_port_swap_btn_edge();
	check_drive_style_btn_edge();
}

/*void check_chute_btn_edge()
{
	static int previous = 0;
	int current = vexRT(chute_btn);
	if (current != previous && current == 1)
	{
		// add onclick handlers here, because
		toggle_chute();
	}
	previous = current;
}

void check_belt_btn_edge()
{
	static int previous = 0;
	int current = vexRT(belt_btn);
	if (current != previous && current == 1)
	{
		// add onclick handlers here
		toggle_belt();
	}
	previous = current;
}

void check_chute_sign_btn_edge()
{
	static int previous = 0;
	int current = vexRT(chute_sign_btn);
	if (current != previous && current == 1)
	{
		// add onclick handlers here
		toggle_chute_sign();
	}
	previous = current;
}

void check_belt_sign_btn_edge()
{
	static int previous = 0;
	int current = vexRT(belt_sign_btn);
	if (current != previous && current == 1)
	{
		// add onclick handlers here
		toggle_belt_sign();
	}
	previous = current;
}

void check_port_swap_btn_edge()
{
	static int previous = 0;
	int current = vexRT(port_swap_btn);
	if (current != previous && current == 1)
	{
		// add onclick handlers here
		swap_ports();
	}
	previous = current;
}

void check_drive_style_btn_edge()
{
	static int previous = 0;
	int current = vexRT(drive_style_btn);
	if (current != previous && current == 1)
	{
		// add onclick handlers here
		change_drive_style();
	}
	previous = current;
}*/
