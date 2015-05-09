bool belt_on = initial_belt_on;

int belt_sign = initial_belt_direction == UP? -1 : +1;

void update_motors()
{
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

void toggle_chute()
{
  lift_chute();
}

void toggle_belt_sign()
{
  belt_sign *= -1;
  update_motors();
}
