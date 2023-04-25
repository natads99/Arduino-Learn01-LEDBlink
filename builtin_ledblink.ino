void setup(){
  pinMode(LED_BUILTIN, OUTPUT);

/*
pinMode adalah sebuah fungsi pada Arduino yang digunakan untuk mengatur mode sebuah pin pada board Arduino. 
Fungsi ini digunakan untuk menentukan apakah sebuah pin akan digunakan sebagai input atau output.

Cara menggunakan : pinMode(nama_pin, mode);

> nama_pin: adalah variabel yang menyimpan nomor pin yang akan diatur mode-nya. Pada board Arduino Uno, 
pin yang dapat digunakan sebagai input/output adalah pin 0 hingga pin 13 dan pin A0 hingga A5.

> mode: adalah parameter yang menyimpan mode yang akan diterapkan pada pin. Terdapat dua mode yang 
dapat diterapkan pada sebuah pin yaitu INPUT dan OUTPUT.
*/

}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(5000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(3000);
}

/* 
digitalWrite adalah sebuah fungsi pada Arduino yang digunakan untuk mengirimkan sinyal digital pada 
sebuah pin pada board Arduino. Fungsi ini digunakan untuk mengendalikan output pada pin digital dengan 
memberikan sinyal HIGH (1) atau LOW (0).

Cara menggunakan : digitalWrite(nama_pin, nilai_sinyal);

> nama_pin: adalah variabel yang menyimpan nomor pin yang akan dikirimkan sinyal digitalnya. 
Pada board Arduino Uno, pin yang dapat digunakan sebagai output digital adalah pin 0 hingga pin 13.

> nilai_sinyal: adalah parameter yang menyimpan nilai sinyal digital yang akan dikirimkan pada pin. 
Terdapat dua nilai yang dapat digunakan yaitu HIGH (1) dan LOW (0).
*/
