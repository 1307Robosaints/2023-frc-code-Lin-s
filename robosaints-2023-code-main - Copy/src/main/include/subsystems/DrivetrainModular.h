// RobotBuilder Version: 5.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.

// ROBOTBUILDER TYPE: Subsystem.
#pragma once

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include <frc2/command/SubsystemBase.h>
#include <frc/drive/DifferentialDrive.h>
#include <frc/motorcontrol/MotorControllerGroup.h>
#include <rev/CANSparkMax.h>
#include <frc/Joystick.h>
//#include <frc/motorcontrol/PWMVictorSPX.h>

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

/**
 *
 *
 * @author ExampleAuthor
 */
class DrivetrainModular: public frc2::SubsystemBase {
private:
    // It's desirable that everything possible is private except
    // for methods that implement subsystem capabilities
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
frc::DifferentialDrive* DifferentialDrive;
//frc::MotorControllerGroup m_motors_right{m_motor_R_1, m_motor_R_2  };
rev::CANSparkMax motor_R_main{1, rev::CANSparkMax::MotorType::kBrushless};
rev::CANSparkMax motor_R_follow{3, rev::CANSparkMax::MotorType::kBrushless};
//frc::MotorControllerGroup m_motors_left{m_motor_L_1, m_motor_L_2  };
rev::CANSparkMax motor_L_main{2, rev::CANSparkMax::MotorType::kBrushless};
rev::CANSparkMax motor_L_follow{4, rev::CANSparkMax::MotorType::kBrushless};

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
public:

DrivetrainModular();
    void InitDefaultCommand();
    void Periodic() override;
    void SimulationPeriodic() override;
    void StandardDrive(frc::Joystick* driveStick);
    
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CMDPIDGETTERS

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CMDPIDGETTERS
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS


};
