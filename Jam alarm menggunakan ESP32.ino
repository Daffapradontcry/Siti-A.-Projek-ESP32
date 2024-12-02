//Definisikan pin
const int pinPIR = 13; // Pin sensor PIR
const int pinBuzzer = 12; // Pin buzzer
void setup() {
 // Inisialisasi pin
 pinMode(pinPIR, INPUT); // Sensor PIR sebagai input
 pinMode(pinBuzzer, OUTPUT); // Buzzer sebagai output
 // Setup komunikasi serial untuk debugging
 Serial.begin(115200);}
void loop() {
 int sensorValue = digitalRead(pinPIR); // Baca status sensor PIR
 if (sensorValue == HIGH) { // Jika ada gerakan terdeteksi
 Serial.println("Gerakan terdeteksi!");
 digitalWrite(pinBuzzer, HIGH); // Menyalakan buzzer
 } else { // Jika tidak ada gerakan
 digitalWrite(pinBuzzer, LOW); // Mematikan buzzer}