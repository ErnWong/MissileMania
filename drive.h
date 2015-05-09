DriveStyle current_drive_style = initial_drive_style;


void motor_left(int power)
{
  motor[left_motor] = power / (vexRT(slow_mo_btn)? 3 : 1);
}

void motor_right(int power)
{
  motor[right_motor] = power / (vexRT(slow_mo_btn)? 3 : 1);
}

void stop_moving()
{
  motor[left_motor] = motor[right_motor] = 0;
}


void change_drive_style()
{
  switch (current_drive_style)
  {
    case TANK:
      current_drive_style = ARCADE;
      break;
    case ARCADE:
      current_drive_style = TANK;
      break;
  }
}


void update_drive()
{
  int left = 0;
  int right = 0;
  switch (current_drive_style)
  {
    case TANK:
      left = vexRT(Ch3);
      right = vexRT(Ch2);
      break;
    case ARCADE:
      left = vexRT(Ch2) + vexRT(Ch1);
      right = vexRT(Ch2) - vexRT(Ch1);
      break;
  }
  motor_left(left);
  motor_right(right);
}
