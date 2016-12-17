#ifndef OBD_H
#define OBD_H

#define RPM                         0x0C
#define ELM_CONNECT                 "ELM"
#define ELM_GET                     ">"
#define ELM_RESET                   "ATZ"
#define ELM_ERROR                   "?"
#define ELM_GETPID                  "0100"
#define ELM_SET_PROTOCOL            "ATSP0"
#define ELM_ANSWER_SET_PROTOCOL     "00"
#define ELM_HANDLER_DISBALE         "ATH0"
#define ELM_HANDLER_ENABLE          "ATH1"
#define MODE_1                      1


enum condition {READY=0,GOODCOMAND=1,BADCOMAND=2};


#endif // OBD_H

enum ELMCMD {
    PIDSupport = 0,
    StatusDTC,
    Freeze_DTC,
    Fuel_system_status,
    Calculated_engine_load_value,
    Engine_coolant_temperature,
    Short_term_fuel_Bank_1,
    Long_term_fuel_Bank_1,
    Short_term_fuel_Bank_2,
    Long_term_fuel_Bank_2,
    Fuel_pressure,
    Intake_manifold_absolute_pressure,
    Engine_RPM,
    Vehicle_speed
};
