// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"
#include "CANTalon.h"
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
std::shared_ptr<CANTalon> RobotMap::driveCANTalonL;
std::shared_ptr<CANTalon> RobotMap::driveCANTalonR;
std::shared_ptr<RobotDrive> RobotMap::driveRobotDrive;
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION

void RobotMap::init() {
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
    LiveWindow *lw = LiveWindow::GetInstance();

    driveCANTalonL.reset(new CANTalon(1));
    lw->AddActuator("Drive", "CAN Talon L", driveCANTalonL);
    
    driveCANTalonR.reset(new CANTalon(2));
    lw->AddActuator("Drive", "CAN Talon R", driveCANTalonR);
    
    driveRobotDrive.reset(new RobotDrive(driveCANTalonL, driveCANTalonR));
    
    driveRobotDrive->SetSafetyEnabled(true);
        driveRobotDrive->SetExpiration(0.1);
        driveRobotDrive->SetSensitivity(0.5);
        driveRobotDrive->SetMaxOutput(1.0);


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}
