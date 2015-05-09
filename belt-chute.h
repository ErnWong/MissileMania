bool belt_on = initial_belt_on;
//bool chute_open = initial_chute_open;

int belt_sign = initial_belt_direction == UP? -1 : +1;
//int chute_sign = initial_chute_direction == OUT? -1 : +1;

void update_motors()
{
	//motor[chute_motor] = chute_open? chute_sign * 127 : 0;
	motor[belt_motor] = belt_on? belt_sign * 127 : 0;
}

void toggle_belt()
{
	belt_on = !belt_on;
	update_motors();
}

void lift_chute()
{
	motor[chute_motor] = 50;
	wait1Msec(500);
	motor[chute_motor] = 0;
}

/*void drop_chute()
{
	motor[chute_motor] = -50;
	wait1Msec(500);
	motor[chute_motor] = 0;
}*/

void toggle_chute()
{
	lift_chute();
}

void toggle_belt_sign()
{
	belt_sign *= -1;
	update_motors();
}

/*void toggle_chute_sign()
{
	chute_sign *= -1;
	update_motors();
}*/
