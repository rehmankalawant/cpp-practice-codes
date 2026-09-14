#### Problem 1: Hospital Billing System Using Inheritance, Polymorphism and RTTI

Domain: Hospital / Healthcare

Problem Statement -

A hospital provides treatment to different categories of patients. The billing process differs depending on
the type of patient and the services provided.

Develop a Hospital Billing System using object-oriented programming concepts in C++. The system should
maintain patient information and calculate the final hospital bill according to the patient's category.

Create a base class named Patient that stores common details such as Patient ID, Patient Name, Age and
Number of Days Admitted.

Derive InPatient and OutPatient from Patient. Further derive EmergencyPatient from InPatient.

An InPatient may be charged for room charges, doctor consultation, medicines and treatment. An
OutPatient may be charged for consultation, diagnostic tests and medicines. An EmergencyPatient should
include inpatient charges along with emergency service charges and ambulance charges, if applicable.

The program should calculate and display the bill differently for each type of patient.


Requirements-

• Create a base class Patient with common data members such as patientId, patientName, age and
numberOfDaysAdmitted.

• Provide appropriate constructors to initialize patient information.

• Create virtual functions such as calculateBill() and displayPatientDetails().

• Derive InPatient and OutPatient from Patient, and derive EmergencyPatient from InPatient.

• Override calculateBill() in InPatient, OutPatient and EmergencyPatient.

• Use suitable billing formulas for each patient category.

• Maintain different patient objects using Patient pointers, such as an array or vector of Patient
pointers.

• Demonstrate runtime polymorphism by calling calculateBill() and displayPatientDetails() through
Patient pointers.

• Use RTTI with dynamic_cast or typeid to identify the actual runtime type of each patient object.

• If an object is an EmergencyPatient, display additional information such as emergency charges,
ambulance charges and type of emergency.

• Perform safe casting by checking the result of dynamic_cast before accessing derived-class-specific
members.
• Include a virtual destructor in the Patient class.
• Create a menu-driven application with options to add different patient types, display all patients,
calculate bills and identify patient types using RTTI.
• Ensure that all dynamically created objects are properly deleted before program termination.