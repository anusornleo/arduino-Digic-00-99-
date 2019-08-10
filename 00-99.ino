int a = 8;
int b = 9;
int c = 10;
int d = 11;
int e = 12;
int f = 13;
int g = 7;
int x = 2;
int y = 3;
int node[] = {8, 9, 10, 11, 12, 13, 7};
int num_array[10][7] = {
  { 1, 1, 1, 1, 1, 1, 0 }, // 0
  { 0, 1, 1, 0, 0, 0, 0 }, // 1
  { 1, 1, 0, 1, 1, 0, 1 }, // 2
  { 1, 1, 1, 1, 0, 0, 1 }, // 3
  { 0, 1, 1, 0, 0, 1, 1 }, // 4
  { 1, 0, 1, 1, 0, 1, 1 }, // 5
  { 1, 0, 1, 1, 1, 1, 1 }, // 6
  { 1, 1, 1, 0, 0, 0, 0 }, // 7
  { 1, 1, 1, 1, 1, 1, 1 }, // 8
  { 1, 1, 1, 1, 0, 1, 1 }, // 9
};

void setup() {
  Serial.begin(9600);
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(x, OUTPUT);
  pinMode(y, OUTPUT);
}

void loop()
{
  for (int count = 0; count < 10; count++) {
    for (int count2 = 0; count2 < 10; count2++) {
      for (int s = 0; s < 100; s++) {
        if (s % 2 == 0) {
          digitalWrite(x, 0);
          delay(5);
          Digic(count);
          digitalWrite(x, 1);
          delay(5);
        } else {
          digitalWrite(y, 0);
          delay(5);
          Digic2(count2);
          digitalWrite(y, 1);
          delay(5);
        }
      }
    }
  }
}

void Digic(int number) {
  for (int i = 0; i < 7; i++) {
    digitalWrite(node[i], num_array[number][i]);
  }
}

void Digic2(int number) {
  for (int i = 0; i < 7; i++) {
    digitalWrite(node[i], num_array[number][i]);
  }
}
