#include "main.h"
#include "config.h"
void auton(){
  //1 - left side win point
  /*
  chassis->moveDistance(0.015_m);
  intake.moveVoltage(12000);
  delay(10);
  chassis->turnAngle(45_deg);
  delay(10);
  chassis->moveDistance(0.10_m);
  chassis->turnAngle(-45_deg);
  delay(10);
  chassis->moveDistance(0.015_m);
  intake.moveVoltage(-12000);
  delay(10);
  chassis->moveDistance(-0.025_m);


  //2 - right side win point

  chassis->moveDistance(0.75_m);
  chassis->turnAngle(45_deg);
  delay(10);
  chassis->moveDistance(1_m);
  chassis->turnAngle(45_deg);
  delay(30);
  chassis->moveDistance(1_m);
  */

  //pulls a goal?
  /*
  chassis->moveDistance(1.75_m);
  delay(100);
  intake.moveVoltage(-10000);
  delay(20);
  chassis->moveDistance(-1.75_m);
  delay(100);
  intake.moveVoltage(10000);
  delay(20);
  fL.setBrakeMode(okapi::AbstractMotor::brakeMode::hold);
  fR.setBrakeMode(okapi::AbstractMotor::brakeMode::hold);
  bL.setBrakeMode(okapi::AbstractMotor::brakeMode::hold);
  bR.setBrakeMode(okapi::AbstractMotor::brakeMode::hold);
  intake.setBrakeMode(okapi::AbstractMotor::brakeMode::hold);
  */

  /*
  intake.moveVoltage(-10000);
  delay(10);
  chassis->moveDistance(-0.75_m);
  intake.moveVoltage(10000);
  delay(10);
  intake.setBrakeMode(okapi::AbstractMotor::brakeMode::hold);
  */
  //chassis->moveDistance(0.25_in);
  //intake.moveVoltage(-10000);
  //delay(20);
  //chassis->moveDistance(-1.25_m);
  //intake.moveVoltage(10000);
  //delay(20);
  fL.setBrakeMode(okapi::AbstractMotor::brakeMode::hold);
  fR.setBrakeMode(okapi::AbstractMotor::brakeMode::hold);
  bL.setBrakeMode(okapi::AbstractMotor::brakeMode::hold);
  bR.setBrakeMode(okapi::AbstractMotor::brakeMode::hold);
  intake.setBrakeMode(okapi::AbstractMotor::brakeMode::hold);
}
void auton_selector();