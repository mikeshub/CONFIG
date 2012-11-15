#ifndef CONFIG_h
#define CONFIG_h

#define UNIT4

//range + / - 2.5 gauss
#define MAG_SC_X 1.49253731343f//conversion to mili gauss
#define MAG_SC_Y 1.49253731343f
#define MAG_SC_Z 1.49253731343f
//conversion to gauss
//0.00149253731f


#ifdef UNIT1
	#define I2C_BUS
	//calibration values for UNIT #1
	#define OFFSET_X 13
	#define OFFSET_Y -8
	#define OFFSET_Z 1

	#define ACC_SC_X 0.03670411985f// = 1 / GRAVITY * 9.8
	#define ACC_SC_Y 0.03726235741f
	#define ACC_SC_Z 0.03843137254f
	//#define MAG_SC_X 0.003430531f// = 1 / GRAVITY * 9.8
	//#define MAG_SC_Y 0.002967359f
	//#define MAG_SC_Z 0.003448275f

	#define COMPASS_MIN_X  -294
	#define COMPASS_MIN_Y  -357
	#define COMPASS_MIN_Z  -257
	#define COMPASS_MAX_X  +289
	#define COMPASS_MAX_Y  +317
	#define COMPASS_MAX_Z  +323

#endif //UNIT 1

#ifdef UNIT2
	#define I2C_BUS
	//calibration values for unit on UNIT #2
	#define OFFSET_X 1
	#define OFFSET_Y 2
	#define OFFSET_Z -13

	#define ACC_SC_X 0.03684210526f// = 1 / GRAVITY * 9.8
	#define ACC_SC_Y 0.03698113207f
	#define ACC_SC_Z 0.03843137254f
	//#define MAG_SC_X 0.003696857f// = 1 / GRAVITY * 9.8
	//#define MAG_SC_Y 0.003189792f
	//#define MAG_SC_Z 0.003338898f

	#define COMPASS_MIN_X -249
	#define COMPASS_MIN_Y -323
	#define COMPASS_MIN_Z -309
	#define COMPASS_MAX_X +298
	#define COMPASS_MAX_Y +304
	#define COMPASS_MAX_Z +285

#endif //UNIT 2


#ifdef UNIT3
	#define I2C_BUS
	//calibration values for unit on UNIT #3
	#define OFFSET_X 16
	#define OFFSET_Y -6
	#define OFFSET_Z -14

	#define ACC_SC_X 0.03754789272f// = 1 / GRAVITY * 9.8
	#define ACC_SC_Y 0.03769230769f
	#define ACC_SC_Z 0.03873517786f
	//#define MAG_SC_X 0.00339558573f// = 1 / GRAVITY * 9.8
	//#define MAG_SC_Y 0.003125f
	//#define MAG_SC_Z 0.00351493848f

	#define COMPASS_MIN_X -314
	#define COMPASS_MIN_Y -361
	#define COMPASS_MIN_Z -249
	#define COMPASS_MAX_X +275
	#define COMPASS_MAX_Y +279
	#define COMPASS_MAX_Z +320


#endif //UNIT3

#ifdef UNIT4
	#define SPI_BUS
	//calibration values for unit on UNIT #3
	#define OFFSET_X -1
	#define OFFSET_Y -11
	#define OFFSET_Z -2

	#define ACC_SC_X 0.03670411985f// = 1 / GRAVITY * 9.8
	#define ACC_SC_Y 0.03684210526f
	#define ACC_SC_Z 0.03843137254f
	//#define MAG_SC_X 0.00326797385f
	//#define MAG_SC_Y 0.00311526479f
	//#define MAG_SC_Z 0.00344827586f

	#define COMPASS_MIN_X -318
	#define COMPASS_MIN_Y -324
	#define COMPASS_MIN_Z -232
	#define COMPASS_MAX_X +294
	#define COMPASS_MAX_Y +317
	#define COMPASS_MAX_Z +349


#endif //UNIT3

#ifdef CUB
	#define I2C_BUS
	//calibration values for unit on CUB
	#define OFFSET_X -9
	#define OFFSET_Y -9
	#define OFFSET_Z -4
	#define ACC_SC_X 0.03705103969f// = 1 / GRAVITY * 9.8
	#define ACC_SC_Y 0.03726235741f
	#define ACC_SC_Z 0.03865877712f

	#define COMPASS_MIN_X = -245;
	#define COMPASS_MIN_Y -290
	#define COMPASS_MIN_Z -336
	#define COMPASS_MAX_X +327
	#define COMPASS_MAX_Y +338
	#define COMPASS_MAX_Z +249

#endif //CUB

#endif