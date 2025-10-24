void reading() {
  sensor = 0;
  for (byte i = 0; i < 5; i++) {
    s[i] = analogRead(4 - i);
    (s[i] > th) ? s[i] = 0 : s[i] = 1;
    sensor += s[i] * base[i];
    // Serial.print(s[i]);
    // Serial.print(" ");
  }
  // Serial.println(sensor, BIN);
}
