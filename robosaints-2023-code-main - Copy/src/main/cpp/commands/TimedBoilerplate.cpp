// RobotBuilder Version: 5.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.

// ROBOTBUILDER TYPE: WaitCommand.


#include "commands/TimedBoilerplate.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

#include "commands/TimedBoilerplate.h"

TimedBoilerplate::TimedBoilerplate(units::second_t timeout) : WaitCommand(timeout),
    m_timeout(timeout)
{

    // Use AddRequirements() here to declare subsystem dependencies
    // eg. AddRequirements(Robot::chassis.get());
    SetName("TimedBoilerplate");

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

}

// Called just before this Command runs the first time
void TimedBoilerplate::Initialize() {
    WaitCommand::Initialize();
}

// Called repeatedly when this Command is scheduled to run
void TimedBoilerplate::Execute() {

}

// Called once after isFinished returns true
void TimedBoilerplate::End(bool interrupted) {
    WaitCommand::End(interrupted);
}

bool TimedBoilerplate::RunsWhenDisabled() const {
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DISABLED
    return false;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DISABLED
}
