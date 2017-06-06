typedef enum {OFF = 0, ON = 1};			// Outputstatus;
typedef enum {RESET = 0, SET = !RESET};	// Flagstatus;
	
#define SET_BYTE_BIT(Byte, Bit)		Byte |= (1<<Bit)
#define CLR_BYTE_BIT(Byte, Bit)		Byte &= ~(1<<Bit)
#define GET_BYTE_BIT(Byte, Bit) 	((Byte & (1<<Bit))==(1<<Bit))


//Ausgänge
#define AusgangLichtHinten(x)		(((x) ?	(SET_BYTE_BIT(datenSendSlaves[1][AusgaengeIO], 0)) : (CLR_BYTE_BIT(datenSendSlaves[1][AusgaengeIO], 0))))

//Eingänge
#define EingangPull					GET_BYTE_BIT(datenEmpfSlaves[2][EingaengeIO], 1)
