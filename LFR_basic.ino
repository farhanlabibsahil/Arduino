//motor driving
//sensor reading
int s[5], th = 512, sensor, sum;
int base[] = { 1, 2, 4, 8, 16 };

int lms = 10, lmf = 8, lmb = 9, rmf = 6, rmb = 7, rms = 5;

void setup() {
  Serial.begin(9600);
  pinMode(lmf, OUTPUT);
  pinMode(lmb, OUTPUT);
  pinMode(rmf, OUTPUT);
  pinMode(rmb, OUTPUT);
}

void loop() {
  reading();
  if (sensor == B00100) motor(100, 100);
  else if (sensor == B01100) motor(80, 100);
  else if (sensor == B01000) motor(30, 100);
  else if (sensor == B11000) motor(0, 100);
  else if (sensor == B10000) motor(-50, 100);
  else if (sensor == B00110) motor(100, 80);
  else if (sensor == B00010) motor(100, 30);
  else if (sensor == B00011) motor(100, 0);
  else if (sensor == B00001) motor(100, -50);
}

