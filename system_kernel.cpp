#include <iostream>
#include <cmath>
double System_Radius_ofTURN_function(double System_Define_aircraft_Velocity, double System_Define_aircraft_Roll_Angle);
void SYTEM_DISPLAY_RADIUS_OF_TURN(double System_Define_aircraft_Velocity, double System_Define_aircraft_Roll_Angle);
double System_TIME_COMPLETE_FUNCTION(double System_Define_aircraft_Velocity, double System_Define_aircraft_Roll_Angle);
void System_DISPLAY_TIME_COMPLETE(double System_Define_aircraft_Velocity, double System_Define_aircraft_Roll_Angle);
double SYTEM_RATE_OF_TURN_FUNCTION(double System_Define_aircraft_Velocity, double System_Define_aircraft_Roll_Angle);
void System_DISPLAY_RATE_OF_TURN(double System_Define_aircraft_Velocity, double System_Define_aircraft_Roll_Angle);
double SYSTEM_ROLLRATE_PERTUBATION_P(double System_Define_aircraft_Velocity, double System_Define_aircraft_Roll_Angle);
void DISPLAY_SYSTEM_ROLLRATE_PERTUBATION_P(double System_Define_aircraft_Velocity, double System_Define_aircraft_Roll_Angle);
double SYSTEM_PITCH_RATE_PERTUBATION_Q(double System_Define_aircraft_Velocity, double System_Define_aircraft_Roll_Angle);
void DISLPLAY_SYSTEM_PITCH_RATE_PERTUBATION_Q(double System_Define_aircraft_Velocity, double System_Define_aircraft_Roll_Angle);
double Yaw_ANGLE_PERTUBATION(double System_Define_aircraft_Velocity, double System_Define_aircraft_Roll_Angle);
void DISPLAY_Yaw_ANGLE_PERTUBATION(double System_Define_aircraft_Velocity, double System_Define_aircraft_Roll_Angle);
void LOGO();
int main() {
  double System_DEFINE_CONST_PI;
  System_DEFINE_CONST_PI = atan(1) * 4;
  /*Calculate radius*/
  double System_Define_aircraft_Velocity;
  double System_Define_aircraft_Roll_Angle;
  LOGO();
  std::cout << "Console Message/ Aircraft velocity (m/s) : " << std::endl;
  std::cin >> System_Define_aircraft_Velocity;
  std::cout << "Console Message/ Aircraft roll angle (degree) : " << std::endl;
  std::cin >> System_Define_aircraft_Roll_Angle;
  SYTEM_DISPLAY_RADIUS_OF_TURN( System_Define_aircraft_Velocity, System_Define_aircraft_Roll_Angle);
  /*Time*/
  System_DISPLAY_TIME_COMPLETE( System_Define_aircraft_Velocity, System_Define_aircraft_Roll_Angle);
  /*Rate of turn*/
  System_DISPLAY_RATE_OF_TURN( System_Define_aircraft_Velocity,  System_Define_aircraft_Roll_Angle);
  /*Matrix substitution*/
  double System_Define_Matrix_1_1 = (1);
  double System_Define_Matrix_1_2 = (0);
  double System_Define_Matrix_1_3 = (0);
  double System_Define_Matrix_2_1 = (0);
  double System_Define_Matrix_2_2 = (cos((System_Define_aircraft_Roll_Angle) * (System_DEFINE_CONST_PI/180)));
  double System_Define_Matrix_2_3 = (sin((System_Define_aircraft_Roll_Angle) * (System_DEFINE_CONST_PI/180)));
  double System_Define_Matrix_3_1 = (0);
  double System_Define_Matrix_3_2 = (-sin((System_Define_aircraft_Roll_Angle) * (System_DEFINE_CONST_PI/180)));
  double System_Define_Matrix_3_3 = (cos((System_Define_aircraft_Roll_Angle) * (System_DEFINE_CONST_PI/180)));
  /*Roll rate pertubation*/
  DISPLAY_SYSTEM_ROLLRATE_PERTUBATION_P( System_Define_aircraft_Velocity,  System_Define_aircraft_Roll_Angle);
  /*pitch rate pertubation*/
  DISLPLAY_SYSTEM_PITCH_RATE_PERTUBATION_Q( System_Define_aircraft_Velocity,  System_Define_aircraft_Roll_Angle);
  /*yaw angle pertubation*/
  DISPLAY_Yaw_ANGLE_PERTUBATION( System_Define_aircraft_Velocity,  System_Define_aircraft_Roll_Angle);
  LOGO();
  std::cin.get();
  return 0;
}
double System_Radius_ofTURN_function(double System_Define_aircraft_Velocity, double System_Define_aircraft_Roll_Angle) {
  double System_DEFINE_GRAVITY;
  System_DEFINE_GRAVITY = (9.807);
  double System_VELOCITY_squared;
  System_VELOCITY_squared = (System_Define_aircraft_Velocity * System_Define_aircraft_Velocity);
  double Sytem_PARAMETER_GRAV_TANGENT;
  double System_TANGENT_PARAMETER;
  double System_DEFINE_PI;
  System_DEFINE_PI = atan(1)*4;
  System_TANGENT_PARAMETER = tan(System_Define_aircraft_Roll_Angle * (System_DEFINE_PI/180));
  Sytem_PARAMETER_GRAV_TANGENT = (System_DEFINE_GRAVITY * System_TANGENT_PARAMETER);
  double System_Function_Return;
  System_Function_Return = (System_VELOCITY_squared/Sytem_PARAMETER_GRAV_TANGENT);
  return System_Function_Return;
}
void SYTEM_DISPLAY_RADIUS_OF_TURN(double System_Define_aircraft_Velocity, double System_Define_aircraft_Roll_Angle) {
  std::cout << "Console Message/ Radius of turn: " << System_Radius_ofTURN_function( System_Define_aircraft_Velocity, System_Define_aircraft_Roll_Angle) << std::endl;
  return;
}
double System_TIME_COMPLETE_FUNCTION(double System_Define_aircraft_Velocity, double System_Define_aircraft_Roll_Angle) {
  double SYSTEM_DEFINE_PARAMETER_PI;
  SYSTEM_DEFINE_PARAMETER_PI = (atan(1))*(4);
  double System_DEFINE_FIRST_PARAMETER;
  System_DEFINE_FIRST_PARAMETER = (2*(SYSTEM_DEFINE_PARAMETER_PI)*System_Radius_ofTURN_function( System_Define_aircraft_Velocity, System_Define_aircraft_Roll_Angle));
  double System_RETURN_FUNCTION;
  System_RETURN_FUNCTION = (System_DEFINE_FIRST_PARAMETER/System_Define_aircraft_Velocity);
  return System_RETURN_FUNCTION;
}
void System_DISPLAY_TIME_COMPLETE(double System_Define_aircraft_Velocity, double System_Define_aircraft_Roll_Angle) {
  std::cout << "Console Message/ Time complete: " << System_TIME_COMPLETE_FUNCTION( System_Define_aircraft_Velocity,  System_Define_aircraft_Roll_Angle) << std::endl;
  return;
}
double SYTEM_RATE_OF_TURN_FUNCTION(double System_Define_aircraft_Velocity, double System_Define_aircraft_Roll_Angle) {
  double SYSTEM_DEFINE_PARAMETER_PI;
  SYSTEM_DEFINE_PARAMETER_PI = (atan(1))*(4);
  double System_DEFINE_FIRST_PARAMETER;
  System_DEFINE_FIRST_PARAMETER = (2*SYSTEM_DEFINE_PARAMETER_PI);
  double System_RETURN_THE_FUNCTION;
  System_RETURN_THE_FUNCTION = (System_DEFINE_FIRST_PARAMETER/System_TIME_COMPLETE_FUNCTION( System_Define_aircraft_Velocity,  System_Define_aircraft_Roll_Angle));
  return System_RETURN_THE_FUNCTION;
}
void System_DISPLAY_RATE_OF_TURN(double System_Define_aircraft_Velocity, double System_Define_aircraft_Roll_Angle) {
  std::cout << "Console Message/ Rate Of Turn: " << SYTEM_RATE_OF_TURN_FUNCTION( System_Define_aircraft_Velocity, System_Define_aircraft_Roll_Angle) << std::endl;
  return;
}
double SYSTEM_ROLLRATE_PERTUBATION_P(double System_Define_aircraft_Velocity, double System_Define_aircraft_Roll_Angle) {
    double System_DEFINE_CONST_PI;
  System_DEFINE_CONST_PI = atan(1) * 4;
  double System_Define_Matrix_1_1 = (1);
  double System_Define_Matrix_1_2 = (0);
  double System_Define_Matrix_1_3 = (0);
  double System_Define_Matrix_2_1 = (0);
  double System_Define_Matrix_2_2 = (cos((System_Define_aircraft_Roll_Angle) * (System_DEFINE_CONST_PI/180)));
  double System_Define_Matrix_2_3 = (sin((System_Define_aircraft_Roll_Angle) * (System_DEFINE_CONST_PI/180)));
  double System_Define_Matrix_3_1 = (0);
  double System_Define_Matrix_3_2 = (-sin((System_Define_aircraft_Roll_Angle) * (System_DEFINE_CONST_PI/180)));
  double System_Define_Matrix_3_3 = (cos((System_Define_aircraft_Roll_Angle) * (System_DEFINE_CONST_PI/180)));
  /*SECOND MATRIX*/
  double System_Define_SECOND_Matrix_1 = (0);
  double System_Define_SECOND_Matrix_2 = (0);
  double System_Define_SECOND_Matrix_3 = (SYTEM_RATE_OF_TURN_FUNCTION( System_Define_aircraft_Velocity,  System_Define_aircraft_Roll_Angle));
  /*Matrix multiplication code*/
  double System_Matrix_Multiply_1 = System_Define_Matrix_1_1 * System_Define_SECOND_Matrix_1;
  double System_Matrix_Multiply_2 = System_Define_Matrix_1_2 * System_Define_SECOND_Matrix_2;
  double System_Matrix_Multiply_3 = System_Define_Matrix_1_3 * System_Define_SECOND_Matrix_3;
  double System_RETURN_MATRIX;
  System_RETURN_MATRIX = (System_Matrix_Multiply_1) + (System_Matrix_Multiply_2) + (System_Matrix_Multiply_3);
  return System_RETURN_MATRIX;
}
void DISPLAY_SYSTEM_ROLLRATE_PERTUBATION_P(double System_Define_aircraft_Velocity, double System_Define_aircraft_Roll_Angle) {
  std::cout << "Console Message/ ROLLRATE PERTUBATION(P): " << SYSTEM_ROLLRATE_PERTUBATION_P( System_Define_aircraft_Velocity,  System_Define_aircraft_Roll_Angle) << std::endl;
  return;
}
double SYSTEM_PITCH_RATE_PERTUBATION_Q(double System_Define_aircraft_Velocity, double System_Define_aircraft_Roll_Angle) {
   double System_DEFINE_CONST_PI;
  System_DEFINE_CONST_PI = atan(1) * 4;
  double System_Define_Matrix_1_1 = (1);
  double System_Define_Matrix_1_2 = (0);
  double System_Define_Matrix_1_3 = (0);
  double System_Define_Matrix_2_1 = (0);
  double System_Define_Matrix_2_2 = (cos((System_Define_aircraft_Roll_Angle) * (System_DEFINE_CONST_PI/180)));
  double System_Define_Matrix_2_3 = (sin((System_Define_aircraft_Roll_Angle) * (System_DEFINE_CONST_PI/180)));
  double System_Define_Matrix_3_1 = (0);
  double System_Define_Matrix_3_2 = (-sin((System_Define_aircraft_Roll_Angle) * (System_DEFINE_CONST_PI/180)));
  double System_Define_Matrix_3_3 = (cos((System_Define_aircraft_Roll_Angle) * (System_DEFINE_CONST_PI/180)));
  /*SECOND MATRIX*/
  double System_Define_SECOND_Matrix_1 = (0);
  double System_Define_SECOND_Matrix_2 = (0);
  double System_Define_SECOND_Matrix_3 = (SYTEM_RATE_OF_TURN_FUNCTION( System_Define_aircraft_Velocity,  System_Define_aircraft_Roll_Angle));
  /*Matrix multiplication code*/
  double System_Matrix_Multiply_1 = System_Define_Matrix_2_1 * System_Define_SECOND_Matrix_1;
  double System_Matrix_Multiply_2 = System_Define_Matrix_2_2 * System_Define_SECOND_Matrix_2;
  double System_Matrix_Multiply_3 = System_Define_Matrix_2_3 * System_Define_SECOND_Matrix_3;
  double System_RETURN_MATRIX;
  System_RETURN_MATRIX = (System_Matrix_Multiply_1) + (System_Matrix_Multiply_2) + (System_Matrix_Multiply_3);
  return System_RETURN_MATRIX;
}
void DISLPLAY_SYSTEM_PITCH_RATE_PERTUBATION_Q(double System_Define_aircraft_Velocity, double System_Define_aircraft_Roll_Angle) {
  std::cout << "Console Message/Pitch Rate Pertubation(q): " << SYSTEM_PITCH_RATE_PERTUBATION_Q( System_Define_aircraft_Velocity,  System_Define_aircraft_Roll_Angle) << std::endl;
  return;
}
double Yaw_ANGLE_PERTUBATION(double System_Define_aircraft_Velocity, double System_Define_aircraft_Roll_Angle) {
  double System_DEFINE_CONST_PI;
  System_DEFINE_CONST_PI = atan(1) * 4;
  double System_Define_Matrix_1_1 = (1);
  double System_Define_Matrix_1_2 = (0);
  double System_Define_Matrix_1_3 = (0);
  double System_Define_Matrix_2_1 = (0);
  double System_Define_Matrix_2_2 = (cos((System_Define_aircraft_Roll_Angle) * (System_DEFINE_CONST_PI/180)));
  double System_Define_Matrix_2_3 = (sin((System_Define_aircraft_Roll_Angle) * (System_DEFINE_CONST_PI/180)));
  double System_Define_Matrix_3_1 = (0);
  double System_Define_Matrix_3_2 = (-sin((System_Define_aircraft_Roll_Angle) * (System_DEFINE_CONST_PI/180)));
  double System_Define_Matrix_3_3 = (cos((System_Define_aircraft_Roll_Angle) * (System_DEFINE_CONST_PI/180)));
  /*SECOND MATRIX*/
  double System_Define_SECOND_Matrix_1 = (0);
  double System_Define_SECOND_Matrix_2 = (0);
  double System_Define_SECOND_Matrix_3 = (SYTEM_RATE_OF_TURN_FUNCTION( System_Define_aircraft_Velocity,  System_Define_aircraft_Roll_Angle));
  /*Matrix multiplication code*/
  double System_Matrix_Multiply_1 = System_Define_Matrix_3_1 * System_Define_SECOND_Matrix_1;
  double System_Matrix_Multiply_2 = System_Define_Matrix_3_2 * System_Define_SECOND_Matrix_2;
  double System_Matrix_Multiply_3 = System_Define_Matrix_3_3 * System_Define_SECOND_Matrix_3;
  double System_RETURN_MATRIX;
  System_RETURN_MATRIX = (System_Matrix_Multiply_1) + (System_Matrix_Multiply_2) + (System_Matrix_Multiply_3);
  return System_RETURN_MATRIX;
}
void DISPLAY_Yaw_ANGLE_PERTUBATION(double System_Define_aircraft_Velocity, double System_Define_aircraft_Roll_Angle) {
  std::cout << "Console Message/Yaw Angle Pertubation: " << Yaw_ANGLE_PERTUBATION( System_Define_aircraft_Velocity,  System_Define_aircraft_Roll_Angle) << std::endl; 
  return;
}
void LOGO() {
  std::cout << "==================";
  std::cout << "AFTERBASIC - AEROSPACE";
  std::cout << "==================" << std::endl;
  return;
}