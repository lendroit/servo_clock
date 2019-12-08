//
// Segment and digit configuration
//
// Notes:
// - Digits of the clock are numbered 01:23
// - Each digit has 7 segments and information for pin, on angle and off angle (in degrees)
// - You will almost certainly need to edit the values below for your own clock
//
const int digit_count = 4;
const int digit_configuration[digit_count][3][7] = {
  // digit 0
  {
    {39,  37,  35,  33,  31,  29,  27}, // pins
    {58,  40,  120, 48,  135, 55,  44}, // on angles
    {152, 142, 25,  150, 31,  145, 130} // off angles
  },
  // digit 1
  {
    {38,  36,  34,  32,  30,  28,  26}, // pins
    {60,  70,  145, 40,  135, 37,  47}, // on angles
    {139, 160, 50,  140, 36,  140, 128} // off angles
  },
  // digit 2
  {
    {36,  37,  38,  39,  40,  41,  42}, // pins
    {53,  45,  133, 40,  130, 45,  45}, // on angles
    {139, 135, 50,  135, 45,  135, 130} // off angles
  },
  // digit 3
  {
    {43,  44,  45,  46,  47,  48,  49}, // pins
    {60,  47,  132, 50,  127, 50,  55}, // on angles
    {139, 135, 50,  140, 40,  135, 135} // off angles
  }
};

#define BAUD_RATE 9600   // ensure your serial monitor is set to the same
#define STAGGER_DELAY 50 // delay segment operations to reduce current draw
